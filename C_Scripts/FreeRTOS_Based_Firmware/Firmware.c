/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "cmsis_os.h"
#include "liquidcrystal_i2c.h"  // Assuming this is the LCD library
#include "stdio.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */
/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */
/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
CAN_HandleTypeDef hcan1;
I2C_HandleTypeDef hi2c1;
I2C_HandleTypeDef hi2c2;
SPI_HandleTypeDef hspi1;
UART_HandleTypeDef huart2;

/* Definitions for LCD Tasks */
osThreadId_t LCDTask_I2CHandle;
osThreadId_t LCDTask_CANHandle;
osThreadId_t LCDTask_SPIHandle;
osThreadId_t LCDTask_UARTHandle;

const osThreadAttr_t LCDTask_attributes = {
  .name = "LCDTask",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityLow,
};

/* Definitions for Message Queues */
osMessageQueueId_t I2CQUEUEHandle;
osMessageQueueId_t CANQUEUEHandle;
osMessageQueueId_t SPIQUEUEHandle;
osMessageQueueId_t UARTQUEUEHandle;

const osMessageQueueAttr_t QUEUE_attributes = {
  .name = "QUEUE"
};

/* Mutex for LCD access */
osMutexId_t LCDMutexHandle;
const osMutexAttr_t LCDMutex_attributes = {
  .name = "LCDMutex"
};

/* USER CODE BEGIN PV */
uint8_t i2cBuffer[16];
uint8_t spiBuffer[16];
uint8_t uartBuffer[16];
CAN_FilterTypeDef Filtercan1;
CAN_RxHeaderTypeDef canRxHeader;
uint8_t canBuffer[8];
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_I2C1_Init(void);
static void MX_I2C2_Init(void);
static void MX_SPI1_Init(void);
static void MX_CAN1_Init(void);
static void MX_USART2_UART_Init(void);
void LCDTask_I2C(void *argument);
void LCDTask_CAN(void *argument);
void LCDTask_SPI(void *argument);
void LCDTask_UART(void *argument);

/* Callback function prototypes */
void I2C_RxCpltCallback(I2C_HandleTypeDef *hi2c);
void CAN_RxCpltCallback(CAN_HandleTypeDef *hcan);
void SPI_RxCpltCallback(SPI_HandleTypeDef *hspi);
void UART_RxCpltCallback(UART_HandleTypeDef *huart);

/* USER CODE BEGIN PFP */
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/
  HAL_Init();

  /* Configure the system clock */
  SystemClock_Config();

  /* Initialize all configured peripherals */

  MX_GPIO_Init();
  MX_I2C1_Init();
  MX_I2C2_Init();
  MX_SPI1_Init();
  MX_CAN1_Init();
  MX_USART2_UART_Init();

  Filtercan1.FilterIdHigh = 0x00;
    Filtercan1.FilterIdLow = 0x00;
    Filtercan1.FilterMaskIdHigh = 0x00;
    Filtercan1.FilterMaskIdLow = 0x00;
    Filtercan1.FilterFIFOAssignment = CAN_FILTER_FIFO0;
    Filtercan1.FilterBank = 0;
    Filtercan1.FilterMode = CAN_FILTERMODE_IDMASK;
    Filtercan1.FilterScale = CAN_FILTERSCALE_32BIT;
    Filtercan1.FilterActivation = CAN_FILTER_ENABLE;
    Filtercan1.SlaveStartFilterBank = 14;
  /* Init scheduler */
  osKernelInitialize();

  /* Create the mutex(es) */
  LCDMutexHandle = osMutexNew(&LCDMutex_attributes);

  /* Create the queue(s) */
  I2CQUEUEHandle = osMessageQueueNew(16, 16, &QUEUE_attributes);
  CANQUEUEHandle = osMessageQueueNew(16, 8, &QUEUE_attributes);
  SPIQUEUEHandle = osMessageQueueNew(16, 16, &QUEUE_attributes);
  UARTQUEUEHandle = osMessageQueueNew(16, 16, &QUEUE_attributes);

  /* Create the thread(s) */
  LCDTask_I2CHandle = osThreadNew(LCDTask_I2C, NULL, &LCDTask_attributes);
  LCDTask_CANHandle = osThreadNew(LCDTask_CAN, NULL, &LCDTask_attributes);
  LCDTask_SPIHandle = osThreadNew(LCDTask_SPI, NULL, &LCDTask_attributes);
  LCDTask_UARTHandle = osThreadNew(LCDTask_UART, NULL, &LCDTask_attributes);

  /* Start reception in interrupt mode */
  HAL_I2C_Slave_Receive_IT(&hi2c2, i2cBuffer, 16);
  HAL_CAN_ActivateNotification(&hcan1, CAN_IT_RX_FIFO0_MSG_PENDING);
  HAL_CAN_Start(&hcan1);  // Start CAN peripheral
  HAL_SPI_Receive_IT(&hspi1, spiBuffer, 16);
  HAL_UART_Receive_IT(&huart2, uartBuffer, 16);

  /* Start scheduler */
  osKernelStart();

  /* Infinite loop */
  while (1)
  {
  }
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief CAN1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_CAN1_Init(void)
{
  hcan1.Instance = CAN1;
  hcan1.Init.Prescaler = 2;
  hcan1.Init.Mode = CAN_MODE_NORMAL;
  hcan1.Init.SyncJumpWidth = CAN_SJW_1TQ;
  hcan1.Init.TimeSeg1 = CAN_BS1_10TQ;
  hcan1.Init.TimeSeg2 = CAN_BS2_4TQ;
  hcan1.Init.TimeTriggeredMode = DISABLE;
  hcan1.Init.AutoBusOff = DISABLE;
  hcan1.Init.AutoWakeUp = DISABLE;
  hcan1.Init.AutoRetransmission = DISABLE;
  hcan1.Init.ReceiveFifoLocked = DISABLE;
  hcan1.Init.TransmitFifoPriority = DISABLE;
  if (HAL_CAN_Init(&hcan1) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief I2C1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_I2C1_Init(void)
{
  hi2c1.Instance = I2C1;
  hi2c1.Init.ClockSpeed = 100000;
  hi2c1.Init.DutyCycle = I2C_DUTYCYCLE_2;
  hi2c1.Init.OwnAddress1 = 0;
  hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c1.Init.OwnAddress2 = 0;
  hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c1) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief I2C2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_I2C2_Init(void)
{
  hi2c2.Instance = I2C2;
  hi2c2.Init.ClockSpeed = 100000;
  hi2c2.Init.DutyCycle = I2C_DUTYCYCLE_2;
  hi2c2.Init.OwnAddress1 = 0;
  hi2c2.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c2.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c2.Init.OwnAddress2 = 0;
  hi2c2.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c2.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c2) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief SPI1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_SPI1_Init(void)
{
  hspi1.Instance = SPI1;
  hspi1.Init.Mode = SPI_MODE_SLAVE;
  hspi1.Init.Direction = SPI_DIRECTION_2LINES;
  hspi1.Init.DataSize = SPI_DATASIZE_8BIT;
  hspi1.Init.CLKPolarity = SPI_POLARITY_LOW;
  hspi1.Init.CLKPhase = SPI_PHASE_1EDGE;
  hspi1.Init.NSS = SPI_NSS_HARD_INPUT;
  hspi1.Init.FirstBit = SPI_FIRSTBIT_MSB;
  hspi1.Init.TIMode = SPI_TIMODE_DISABLE;
  hspi1.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
  hspi1.Init.CRCPolynomial = 10;
  if (HAL_SPI_Init(&hspi1) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief USART2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART2_UART_Init(void)
{
  huart2.Instance = USART2;
  huart2.Init.BaudRate = 115200;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_1;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13, GPIO_PIN_RESET);

  /*Configure GPIO pins : PD12 PD13 */
  GPIO_InitStruct.Pin = GPIO_PIN_12|GPIO_PIN_13;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);
}

/* Callback functions */
void HAL_I2C_SlaveRxCpltCallback(I2C_HandleTypeDef *hi2c)
{
  if (hi2c->Instance == I2C2)
  {
    osMessageQueuePut(I2CQUEUEHandle, i2cBuffer, 0, 0);
    HAL_I2C_Slave_Receive_IT(&hi2c2, i2cBuffer, 16);  // Restart reception
  }
}

void HAL_CAN_RxFifo0MsgPendingCallback(CAN_HandleTypeDef *hcan)
{
  if (hcan->Instance == CAN1)
  {
    HAL_CAN_GetRxMessage(hcan, CAN_RX_FIFO0, &canRxHeader, canBuffer);
    osMessageQueuePut(CANQUEUEHandle, canBuffer, 0, 0);
  }
}

void HAL_SPI_RxCpltCallback(SPI_HandleTypeDef *hspi)
{
  if (hspi->Instance == SPI1)
  {
    osMessageQueuePut(SPIQUEUEHandle, spiBuffer, 0, 0);
    HAL_SPI_Receive_IT(&hspi1, spiBuffer, 16);  // Restart reception
  }
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
  if (huart->Instance == USART2)
  {
    osMessageQueuePut(UARTQUEUEHandle, uartBuffer, 0, 0);
    HAL_UART_Receive_IT(&huart2, uartBuffer, 16);  // Restart reception
  }
}

/* LCD Tasks */
void LCDTask_I2C(void *argument)
{
  uint8_t buffer[16];
  HD44780_Init(2);  // Initialize 16x2 LCD
  for(;;)
  {
    if (osMessageQueueGet(I2CQUEUEHandle, buffer, NULL, osWaitForever) == osOK)
    {
      osMutexAcquire(LCDMutexHandle, osWaitForever);
      HD44780_Clear();
      HD44780_SetCursor(0, 0);
      HD44780_PrintStr("I2C: ");
      HD44780_PrintStr((char*)buffer);
      osMutexRelease(LCDMutexHandle);
    }
  }
  osDelay(1000);
}

void LCDTask_CAN(void *argument)
{
  uint8_t buffer[16];
  HD44780_Init(2);  // Initialize 16x2 LCD
  for(;;)
  {
    if (osMessageQueueGet(CANQUEUEHandle, buffer, NULL, osWaitForever) == osOK)
    {
      osMutexAcquire(LCDMutexHandle, osWaitForever);
      HD44780_Clear();
      HD44780_SetCursor(0, 0);
      HD44780_PrintStr("CAN: ");
        HD44780_PrintStr((char*)buffer);
HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, SET);
      osMutexRelease(LCDMutexHandle);
    }
  }
  osDelay(1000);
}

void LCDTask_SPI(void *argument)
{
  uint8_t buffer[16];
  HD44780_Init(2);  // Initialize 16x2 LCD
  for(;;)
  {
    if (osMessageQueueGet(SPIQUEUEHandle, buffer, NULL, osWaitForever) == osOK)
    {
      osMutexAcquire(LCDMutexHandle, osWaitForever);
      HD44780_Clear();
      HD44780_SetCursor(0, 0);
      HD44780_PrintStr("SPI: ");
      HD44780_PrintStr((char*)buffer);
      osMutexRelease(LCDMutexHandle);
    }
  }
  osDelay(1000);
}

void LCDTask_UART(void *argument)
{
  uint8_t buffer[16];
  HD44780_Init(2);  // Initialize 16x2 LCD
  for(;;)
  {
    if (osMessageQueueGet(UARTQUEUEHandle, buffer, NULL, osWaitForever) == osOK)
    {
      osMutexAcquire(LCDMutexHandle, osWaitForever);
      HD44780_Clear();
      HD44780_SetCursor(0, 0);
      HD44780_PrintStr("UART: ");
      HD44780_PrintStr((char*)buffer);
      osMutexRelease(LCDMutexHandle);
    }
  }
  osDelay(1000);
}

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  __disable_irq();
  while (1)
  {
  }
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
