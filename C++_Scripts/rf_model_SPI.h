#pragma once
#include <cstdarg>
#include <cstdint>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[[4, 78]] = { 0 };
                        // tree #1
                        if (x[1] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[1] <= 1.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 1.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 73.5) {
                                if (x[0] <= 2.5) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 18.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 3.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 5.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 8.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 16.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 35.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 54.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 234.0) {
                                    if (x[1] <= 200.5) {
                                        if (x[1] <= 171.0) {
                                            if (x[1] <= 94.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 133.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 184.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 224.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #2
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 32.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 80.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 207.5) {
                                    if (x[1] <= 83.0) {
                                        if (x[1] <= 56.0) {
                                            if (x[1] <= 5.5) {
                                                if (x[1] <= 4.5) {
                                                    if (x[1] <= 3.5) {
                                                        if (x[1] <= 2.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 24.5) {
                                                    if (x[1] <= 11.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 49.5) {
                                                        if (x[1] <= 40.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 51.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 145.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 191.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 224.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #3
                        if (x[0] <= 2.5) {
                            if (x[1] <= 3.0) {
                                if (x[1] <= 1.5) {
                                    if (x[1] <= 0.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 32.5) {
                                        if (x[1] <= 18.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 48.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 65.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 4.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 11.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 35.0) {
                                                if (x[1] <= 19.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 172.0) {
                                                    if (x[1] <= 54.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 70.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 94.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 125.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 151.5) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 192.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #4
                        if (x[0] <= 1.5) {
                            if (x[0] <= 0.5) {
                                if (x[1] <= 32.5) {
                                    if (x[1] <= 18.0) {
                                        if (x[1] <= 2.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 49.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 65.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 86.0) {
                                if (x[0] <= 2.5) {
                                    if (x[1] <= 3.5) {
                                        if (x[1] <= 2.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 51.0) {
                                            if (x[1] <= 5.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 8.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 21.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 40.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 56.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 125.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 207.5) {
                                        if (x[1] <= 163.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 184.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 192.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 225.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #5
                        if (x[1] <= 2.5) {
                            if (x[0] <= 1.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 48.5) {
                                        if (x[1] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 96.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 3.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 54.0) {
                                            if (x[1] <= 30.0) {
                                                if (x[1] <= 7.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 70.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 94.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 224.5) {
                                                        if (x[1] <= 161.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #6
                        if (x[1] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[1] <= 1.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 1.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 61.5) {
                                if (x[1] <= 32.5) {
                                    if (x[0] <= 1.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 26.5) {
                                            if (x[1] <= 5.5) {
                                                if (x[1] <= 4.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 14.0) {
                                                    if (x[1] <= 8.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 19.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 41.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 54.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[1] <= 143.5) {
                                        if (x[0] <= 1.0) {
                                            if (x[1] <= 65.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 97.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 73.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[1] <= 94.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 165.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 193.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 224.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 234.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #7
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 64.5) {
                                        if (x[1] <= 18.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 48.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 2.5) {
                                    if (x[1] <= 1.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 5.5) {
                                        if (x[1] <= 4.5) {
                                            if (x[1] <= 3.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 14.0) {
                                            if (x[1] <= 8.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 19.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 56.0) {
                                                    if (x[1] <= 51.5) {
                                                        if (x[1] <= 40.5) {
                                                            if (x[1] <= 26.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 49.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 101.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 184.0) {
                                                            if (x[1] <= 157.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 177.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 192.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #8
                        if (x[0] <= 2.5) {
                            if (x[1] <= 2.5) {
                                if (x[0] <= 0.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 1.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 74.0) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 65.5) {
                                            if (x[1] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 48.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 64.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 8.0) {
                                            if (x[1] <= 4.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 19.0) {
                                                if (x[1] <= 14.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 35.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 49.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 51.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 56.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 163.5) {
                                        if (x[1] <= 125.5) {
                                            if (x[1] <= 94.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 199.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 234.0) {
                                                if (x[1] <= 224.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #9
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 18.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 48.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 64.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 65.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 97.0) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 4.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 80.0) {
                                        if (x[1] <= 51.5) {
                                            if (x[1] <= 14.0) {
                                                if (x[1] <= 8.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 33.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 145.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 200.5) {
                                                if (x[1] <= 184.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 224.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 234.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #10
                        if (x[1] <= 3.5) {
                            if (x[0] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[1] <= 74.0) {
                                    if (x[1] <= 62.0) {
                                        if (x[0] <= 1.0) {
                                            if (x[1] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 11.5) {
                                                if (x[1] <= 5.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 51.0) {
                                                    if (x[1] <= 19.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 26.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 40.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 56.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 65.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 94.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 191.0) {
                                            if (x[1] <= 133.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 171.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 216.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #11
                        if (x[0] <= 2.5) {
                            if (x[1] <= 2.5) {
                                if (x[1] <= 1.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 18.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 64.5) {
                                            if (x[1] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 48.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 3.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 21.5) {
                                            if (x[1] <= 8.5) {
                                                if (x[1] <= 5.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 40.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 234.0) {
                                                    if (x[1] <= 224.5) {
                                                        if (x[1] <= 54.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 109.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 165.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 193.5) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #12
                        if (x[1] <= 61.5) {
                            if (x[0] <= 1.5) {
                                if (x[1] <= 3.0) {
                                    if (x[0] <= 0.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 32.5) {
                                        if (x[1] <= 18.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 51.5) {
                                        if (x[1] <= 49.5) {
                                            if (x[1] <= 30.0) {
                                                if (x[1] <= 2.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 4.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 8.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 56.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 65.5) {
                                if (x[1] <= 64.5) {
                                    if (x[0] <= 1.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 149.5) {
                                    if (x[1] <= 97.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 234.0) {
                                        if (x[1] <= 178.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 207.5) {
                                                if (x[1] <= 192.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 224.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        // tree #13
                        if (x[0] <= 2.5) {
                            if (x[1] <= 2.5) {
                                if (x[1] <= 1.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 61.5) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 18.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 56.0) {
                                            if (x[1] <= 51.5) {
                                                if (x[1] <= 16.0) {
                                                    if (x[1] <= 4.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 5.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 8.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 35.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 65.5) {
                                            if (x[1] <= 64.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 97.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 94.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 146.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 200.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #14
                        if (x[0] <= 2.5) {
                            if (x[1] <= 2.5) {
                                if (x[1] <= 1.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 96.5) {
                                        if (x[1] <= 18.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 48.5) {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 64.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 7.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 21.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 165.0) {
                                                if (x[1] <= 40.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 49.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 51.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 67.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 120.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 178.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 200.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 224.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #15
                        if (x[1] <= 2.5) {
                            if (x[1] <= 1.5) {
                                if (x[1] <= 0.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 86.5) {
                                if (x[0] <= 2.5) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 18.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 64.5) {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 48.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 65.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 4.5) {
                                            if (x[1] <= 3.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 19.0) {
                                                if (x[1] <= 11.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 40.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 133.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 165.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 177.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 192.0) {
                                                    if (x[1] <= 184.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 207.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #16
                        if (x[0] <= 1.5) {
                            if (x[0] <= 0.5) {
                                if (x[1] <= 48.5) {
                                    if (x[1] <= 18.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 61.5) {
                                if (x[1] <= 5.5) {
                                    if (x[1] <= 4.5) {
                                        if (x[1] <= 3.5) {
                                            if (x[1] <= 2.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 8.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 40.5) {
                                            if (x[1] <= 26.5) {
                                                if (x[1] <= 14.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 19.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 51.5) {
                                                if (x[1] <= 49.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 56.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 73.5) {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 94.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 133.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 184.0) {
                                                if (x[1] <= 171.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 216.0) {
                                                    if (x[1] <= 192.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 234.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #17
                        if (x[1] <= 3.0) {
                            if (x[1] <= 1.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 32.5) {
                                        if (x[1] <= 18.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 49.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 14.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 225.5) {
                                            if (x[1] <= 184.0) {
                                                if (x[1] <= 40.5) {
                                                    if (x[1] <= 26.5) {
                                                        if (x[1] <= 19.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 113.0) {
                                                        if (x[1] <= 65.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 151.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 165.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 177.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 200.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #18
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 48.5) {
                                        if (x[1] <= 32.5) {
                                            if (x[1] <= 16.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 64.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 65.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 97.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 70.5) {
                                    if (x[1] <= 49.5) {
                                        if (x[1] <= 40.5) {
                                            if (x[1] <= 19.0) {
                                                if (x[1] <= 8.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 14.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 26.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 51.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 56.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 94.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 125.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 151.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 187.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 224.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 234.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #19
                        if (x[0] <= 1.5) {
                            if (x[0] <= 0.5) {
                                if (x[1] <= 32.5) {
                                    if (x[1] <= 18.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 49.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 65.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 57.0) {
                                if (x[1] <= 5.5) {
                                    if (x[1] <= 4.5) {
                                        if (x[1] <= 1.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 2.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 3.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 8.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 35.0) {
                                            if (x[1] <= 16.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 49.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 86.0) {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 125.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 151.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 185.0) {
                                                if (x[1] <= 165.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 207.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 224.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #20
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[1] <= 3.0) {
                                    if (x[0] <= 0.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 18.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 49.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 2.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 216.0) {
                                            if (x[1] <= 192.0) {
                                                if (x[1] <= 177.0) {
                                                    if (x[1] <= 56.0) {
                                                        if (x[1] <= 16.0) {
                                                            if (x[1] <= 8.0) {
                                                                if (x[1] <= 4.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 35.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 51.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 83.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 125.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 157.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 184.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #21
                        if (x[1] <= 3.0) {
                            if (x[0] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 73.5) {
                                if (x[1] <= 61.5) {
                                    if (x[1] <= 51.5) {
                                        if (x[1] <= 26.5) {
                                            if (x[1] <= 4.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 5.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 13.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1.0) {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 41.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 56.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 94.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 234.0) {
                                            if (x[1] <= 209.0) {
                                                if (x[1] <= 165.0) {
                                                    if (x[1] <= 133.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 177.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 184.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #22
                        if (x[1] <= 2.5) {
                            if (x[0] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 32.5) {
                                        if (x[1] <= 18.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 49.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 65.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 3.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 209.0) {
                                            if (x[1] <= 51.5) {
                                                if (x[1] <= 49.5) {
                                                    if (x[1] <= 18.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 40.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 67.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 94.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 133.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 184.0) {
                                                                if (x[1] <= 171.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 234.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #23
                        if (x[0] <= 2.5) {
                            if (x[1] <= 2.5) {
                                if (x[0] <= 1.5) {
                                    if (x[0] <= 0.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 1.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 4.5) {
                                    if (x[1] <= 3.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 64.5) {
                                            if (x[1] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 48.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 96.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 26.5) {
                                            if (x[1] <= 19.0) {
                                                if (x[1] <= 14.0) {
                                                    if (x[1] <= 5.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 8.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 40.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 207.5) {
                                                    if (x[1] <= 184.0) {
                                                        if (x[1] <= 94.5) {
                                                            if (x[1] <= 70.5) {
                                                                if (x[1] <= 51.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 56.0) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 133.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 165.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 177.0) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 192.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 225.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #24
                        if (x[1] <= 61.5) {
                            if (x[1] <= 2.5) {
                                if (x[1] <= 1.5) {
                                    if (x[0] <= 1.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 56.0) {
                                    if (x[1] <= 18.0) {
                                        if (x[1] <= 3.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 43.0) {
                                            if (x[0] <= 1.0) {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 65.5) {
                                if (x[0] <= 1.5) {
                                    if (x[1] <= 64.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 97.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 207.5) {
                                        if (x[1] <= 140.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 224.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #25
                        if (x[1] <= 3.0) {
                            if (x[0] <= 1.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 136.0) {
                                if (x[1] <= 61.5) {
                                    if (x[1] <= 41.0) {
                                        if (x[1] <= 32.5) {
                                            if (x[1] <= 5.0) {
                                                if (x[0] <= 1.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 1.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 11.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 19.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 26.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 56.0) {
                                            if (x[1] <= 51.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2.5) {
                                        if (x[0] <= 1.0) {
                                            if (x[1] <= 97.0) {
                                                if (x[1] <= 64.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 65.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 64.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 151.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 172.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 207.5) {
                                            if (x[1] <= 192.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 224.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 234.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #26
                        if (x[0] <= 1.5) {
                            if (x[0] <= 0.5) {
                                if (x[1] <= 2.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 97.0) {
                                        if (x[1] <= 65.0) {
                                            if (x[1] <= 32.5) {
                                                if (x[1] <= 18.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 48.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 61.5) {
                                if (x[1] <= 24.5) {
                                    if (x[1] <= 14.0) {
                                        if (x[1] <= 2.5) {
                                            if (x[1] <= 1.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 4.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 8.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 40.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 54.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2.5) {
                                    if (x[1] <= 151.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 191.0) {
                                            if (x[1] <= 171.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 216.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #27
                        if (x[1] <= 2.5) {
                            if (x[1] <= 1.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[1] <= 73.0) {
                                    if (x[1] <= 24.5) {
                                        if (x[1] <= 10.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 41.0) {
                                            if (x[0] <= 1.0) {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 51.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 56.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 94.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 185.0) {
                                            if (x[1] <= 139.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 207.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 224.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #28
                        if (x[0] <= 1.5) {
                            if (x[0] <= 0.5) {
                                if (x[1] <= 2.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 65.5) {
                                        if (x[1] <= 49.0) {
                                            if (x[1] <= 32.5) {
                                                if (x[1] <= 18.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 97.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 61.5) {
                                if (x[1] <= 54.5) {
                                    if (x[1] <= 16.0) {
                                        if (x[1] <= 1.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 2.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 3.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 5.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 8.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 35.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 49.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 2.5) {
                                    if (x[1] <= 234.0) {
                                        if (x[1] <= 133.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 165.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 178.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 209.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #29
                        if (x[1] <= 2.5) {
                            if (x[1] <= 1.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 136.0) {
                                if (x[1] <= 61.5) {
                                    if (x[1] <= 26.5) {
                                        if (x[1] <= 4.5) {
                                            if (x[1] <= 3.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 8.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 14.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 19.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.0) {
                                            if (x[1] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 49.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 51.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 56.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2.5) {
                                        if (x[0] <= 1.0) {
                                            if (x[1] <= 97.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 64.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 234.0) {
                                    if (x[1] <= 178.0) {
                                        if (x[1] <= 157.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 192.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 224.5) {
                                                if (x[1] <= 207.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #30
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 18.0) {
                                        if (x[1] <= 2.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 96.5) {
                                            if (x[1] <= 64.5) {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 48.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 6.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 14.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 184.0) {
                                            if (x[1] <= 37.0) {
                                                if (x[1] <= 19.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 125.5) {
                                                    if (x[1] <= 83.0) {
                                                        if (x[1] <= 56.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 163.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 192.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 207.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 224.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 234.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #31
                        if (x[0] <= 2.5) {
                            if (x[1] <= 2.5) {
                                if (x[0] <= 0.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 26.5) {
                                    if (x[0] <= 1.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 3.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 8.5) {
                                                if (x[1] <= 4.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 5.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 16.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 65.5) {
                                                if (x[1] <= 48.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 64.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 97.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 40.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 49.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 51.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 119.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 192.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 217.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #32
                        if (x[1] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 1.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 96.5) {
                                        if (x[1] <= 32.5) {
                                            if (x[1] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 48.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 64.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 3.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 49.5) {
                                            if (x[1] <= 35.0) {
                                                if (x[1] <= 7.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 16.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 113.0) {
                                                if (x[1] <= 67.5) {
                                                    if (x[1] <= 51.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 157.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 184.0) {
                                                        if (x[1] <= 177.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 207.5) {
                                                            if (x[1] <= 192.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 225.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #33
                        if (x[1] <= 2.5) {
                            if (x[0] <= 1.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 1.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 61.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 18.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 4.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 11.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 56.0) {
                                                if (x[1] <= 51.5) {
                                                    if (x[1] <= 40.5) {
                                                        if (x[1] <= 24.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 49.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 65.5) {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 171.0) {
                                            if (x[1] <= 133.0) {
                                                if (x[1] <= 94.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 184.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 192.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 216.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 234.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #34
                        if (x[0] <= 2.5) {
                            if (x[1] <= 2.5) {
                                if (x[0] <= 1.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 96.5) {
                                        if (x[1] <= 48.5) {
                                            if (x[1] <= 18.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 64.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 184.0) {
                                        if (x[1] <= 8.0) {
                                            if (x[1] <= 4.5) {
                                                if (x[1] <= 3.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 19.0) {
                                                if (x[1] <= 14.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 35.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 54.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 83.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 125.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 157.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 177.0) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 192.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 216.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 234.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #35
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[1] <= 3.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 32.5) {
                                        if (x[1] <= 18.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 48.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 65.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 97.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 125.5) {
                                    if (x[1] <= 83.0) {
                                        if (x[1] <= 35.0) {
                                            if (x[1] <= 2.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 3.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 7.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 14.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 19.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 54.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 157.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 185.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 216.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 234.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #36
                        if (x[1] <= 2.5) {
                            if (x[1] <= 1.5) {
                                if (x[0] <= 1.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 18.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 48.5) {
                                            if (x[1] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 65.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 97.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 5.5) {
                                        if (x[1] <= 4.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 113.0) {
                                            if (x[1] <= 66.0) {
                                                if (x[1] <= 49.5) {
                                                    if (x[1] <= 11.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 33.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 180.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 224.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 234.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #37
                        if (x[0] <= 2.5) {
                            if (x[1] <= 3.0) {
                                if (x[0] <= 1.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 1.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 97.0) {
                                        if (x[1] <= 64.5) {
                                            if (x[1] <= 32.5) {
                                                if (x[1] <= 18.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 48.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 65.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 40.5) {
                                        if (x[1] <= 26.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 184.0) {
                                            if (x[1] <= 49.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 51.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 56.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 101.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 157.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 177.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 192.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 216.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #38
                        if (x[1] <= 3.0) {
                            if (x[1] <= 1.0) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 136.0) {
                                if (x[0] <= 2.5) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 96.5) {
                                            if (x[1] <= 32.5) {
                                                if (x[1] <= 18.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 48.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 64.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 26.5) {
                                            if (x[1] <= 19.0) {
                                                if (x[1] <= 4.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 5.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 11.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 45.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 83.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 151.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 207.5) {
                                        if (x[1] <= 192.0) {
                                            if (x[1] <= 165.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 178.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 224.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #39
                        if (x[0] <= 2.5) {
                            if (x[1] <= 2.5) {
                                if (x[0] <= 1.5) {
                                    if (x[1] <= 1.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 1.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 74.0) {
                                    if (x[1] <= 61.5) {
                                        if (x[1] <= 26.5) {
                                            if (x[0] <= 1.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 16.0) {
                                                    if (x[1] <= 5.5) {
                                                        if (x[1] <= 4.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 8.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 41.0) {
                                                if (x[0] <= 1.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 51.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 56.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 64.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 65.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 187.5) {
                                        if (x[1] <= 133.0) {
                                            if (x[1] <= 94.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 225.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #40
                        if (x[0] <= 2.5) {
                            if (x[1] <= 2.5) {
                                if (x[1] <= 1.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 97.0) {
                                        if (x[1] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 49.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 65.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 151.5) {
                                        if (x[1] <= 66.0) {
                                            if (x[1] <= 40.5) {
                                                if (x[1] <= 14.0) {
                                                    if (x[1] <= 3.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 4.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 5.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 8.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 24.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 49.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 94.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 125.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 171.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 184.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 192.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 207.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 224.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #41
                        if (x[1] <= 3.0) {
                            if (x[0] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 74.0) {
                                if (x[0] <= 2.5) {
                                    if (x[1] <= 26.5) {
                                        if (x[1] <= 11.0) {
                                            if (x[1] <= 4.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 19.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.0) {
                                            if (x[1] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 49.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 40.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 49.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 54.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 94.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 234.0) {
                                        if (x[1] <= 184.0) {
                                            if (x[1] <= 125.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 163.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 200.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 224.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        // tree #42
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 65.5) {
                                        if (x[1] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 48.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 64.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 19.0) {
                                    if (x[1] <= 5.0) {
                                        if (x[1] <= 1.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 2.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 3.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 42.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 200.5) {
                                            if (x[1] <= 113.0) {
                                                if (x[1] <= 56.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 70.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 151.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 172.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 224.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 234.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #43
                        if (x[1] <= 2.5) {
                            if (x[0] <= 1.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 1.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[1] <= 136.0) {
                                    if (x[1] <= 26.5) {
                                        if (x[1] <= 4.5) {
                                            if (x[0] <= 1.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 3.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 19.0) {
                                                if (x[1] <= 8.5) {
                                                    if (x[1] <= 5.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 14.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 86.0) {
                                            if (x[1] <= 59.0) {
                                                if (x[1] <= 43.0) {
                                                    if (x[1] <= 32.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 192.0) {
                                        if (x[1] <= 151.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 171.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 184.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 207.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 224.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #44
                        if (x[0] <= 2.5) {
                            if (x[1] <= 2.5) {
                                if (x[0] <= 1.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 1.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 136.0) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 96.0) {
                                            if (x[1] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 48.5) {
                                                    if (x[1] <= 32.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 4.5) {
                                            if (x[1] <= 3.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 11.5) {
                                                if (x[1] <= 5.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 62.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 207.5) {
                                        if (x[1] <= 165.0) {
                                            if (x[1] <= 151.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 177.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 184.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 192.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 225.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #45
                        if (x[0] <= 1.5) {
                            if (x[1] <= 17.0) {
                                if (x[0] <= 0.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 32.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 48.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 64.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 65.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[1] <= 5.5) {
                                    if (x[1] <= 4.5) {
                                        if (x[1] <= 3.0) {
                                            if (x[1] <= 1.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 51.0) {
                                        if (x[1] <= 40.5) {
                                            if (x[1] <= 24.5) {
                                                if (x[1] <= 11.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 151.5) {
                                            if (x[1] <= 125.5) {
                                                if (x[1] <= 80.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 234.0) {
                                                if (x[1] <= 184.0) {
                                                    if (x[1] <= 171.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 200.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 224.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #46
                        if (x[1] <= 2.5) {
                            if (x[1] <= 1.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 18.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 49.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 151.5) {
                                        if (x[1] <= 11.5) {
                                            if (x[1] <= 5.5) {
                                                if (x[1] <= 3.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 4.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 19.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 35.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 51.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 67.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 94.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 125.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 171.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 224.5) {
                                                if (x[1] <= 192.0) {
                                                    if (x[1] <= 184.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 207.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 234.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #47
                        if (x[1] <= 3.0) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 1.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[1] <= 74.0) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 48.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 65.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 5.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 14.0) {
                                                if (x[1] <= 8.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 56.0) {
                                                    if (x[1] <= 40.5) {
                                                        if (x[1] <= 26.5) {
                                                            if (x[1] <= 19.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 49.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 51.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 151.5) {
                                        if (x[1] <= 94.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 125.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 179.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 217.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #48
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 49.0) {
                                        if (x[1] <= 2.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 65.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 97.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 207.5) {
                                    if (x[1] <= 191.0) {
                                        if (x[1] <= 113.0) {
                                            if (x[1] <= 65.5) {
                                                if (x[1] <= 19.0) {
                                                    if (x[1] <= 2.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 3.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 4.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 5.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 11.5) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 35.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 151.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 165.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 177.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 225.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #49
                        if (x[1] <= 3.0) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 74.0) {
                                if (x[1] <= 61.5) {
                                    if (x[1] <= 43.0) {
                                        if (x[0] <= 1.0) {
                                            if (x[1] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 4.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 8.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 14.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 19.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 26.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 56.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 65.5) {
                                        if (x[0] <= 1.5) {
                                            if (x[1] <= 64.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 64.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 94.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 133.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 184.0) {
                                            if (x[1] <= 171.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #50
                        if (x[1] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 1.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[1] <= 41.0) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 32.5) {
                                            if (x[1] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 26.5) {
                                            if (x[1] <= 16.0) {
                                                if (x[1] <= 3.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 7.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 51.5) {
                                            if (x[1] <= 49.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 126.5) {
                                                if (x[1] <= 67.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 177.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 184.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 209.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 234.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #51
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[1] <= 3.0) {
                                    if (x[1] <= 1.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 18.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 65.5) {
                                            if (x[1] <= 48.5) {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 64.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 40.5) {
                                    if (x[1] <= 26.5) {
                                        if (x[1] <= 8.0) {
                                            if (x[1] <= 4.5) {
                                                if (x[1] <= 3.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 14.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 19.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 49.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 78.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 234.0) {
                                                if (x[1] <= 188.5) {
                                                    if (x[1] <= 125.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #52
                        if (x[0] <= 2.5) {
                            if (x[1] <= 2.5) {
                                if (x[0] <= 1.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 18.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 97.0) {
                                            if (x[1] <= 48.5) {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 64.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 65.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 35.0) {
                                        if (x[1] <= 16.0) {
                                            if (x[1] <= 4.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 8.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 94.5) {
                                            if (x[1] <= 67.5) {
                                                if (x[1] <= 49.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 51.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 139.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 178.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 200.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 225.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #53
                        if (x[1] <= 2.5) {
                            if (x[1] <= 1.5) {
                                if (x[1] <= 0.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 18.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 80.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 224.5) {
                                        if (x[1] <= 16.0) {
                                            if (x[1] <= 8.5) {
                                                if (x[1] <= 4.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 207.5) {
                                                if (x[1] <= 56.0) {
                                                    if (x[1] <= 51.0) {
                                                        if (x[1] <= 26.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 40.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 113.0) {
                                                        if (x[1] <= 70.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 157.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 178.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 192.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 234.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #54
                        if (x[1] <= 6.5) {
                            if (x[1] <= 1.5) {
                                if (x[1] <= 0.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 48.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 65.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 97.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 184.0) {
                                        if (x[1] <= 16.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 49.5) {
                                                if (x[1] <= 40.5) {
                                                    if (x[1] <= 26.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 151.5) {
                                                    if (x[1] <= 113.0) {
                                                        if (x[1] <= 70.5) {
                                                            if (x[1] <= 51.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 56.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 165.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 177.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 192.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 207.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #55
                        if (x[0] <= 2.5) {
                            if (x[1] <= 2.5) {
                                if (x[0] <= 0.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 1.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 41.0) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 32.5) {
                                            if (x[1] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 7.5) {
                                            if (x[1] <= 3.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 14.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 24.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 96.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 49.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 207.5) {
                                                if (x[1] <= 165.0) {
                                                    if (x[1] <= 51.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 83.0) {
                                                            if (x[1] <= 56.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 133.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 178.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 192.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 224.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #56
                        if (x[1] <= 2.5) {
                            if (x[1] <= 1.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 61.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 32.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 5.0) {
                                        if (x[1] <= 3.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 51.5) {
                                            if (x[1] <= 40.5) {
                                                if (x[1] <= 19.0) {
                                                    if (x[1] <= 11.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 26.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 49.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 56.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 73.5) {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 224.5) {
                                            if (x[1] <= 207.5) {
                                                if (x[1] <= 94.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 133.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 171.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 191.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #57
                        if (x[0] <= 2.5) {
                            if (x[1] <= 2.5) {
                                if (x[0] <= 1.5) {
                                    if (x[1] <= 1.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 32.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 97.0) {
                                            if (x[1] <= 48.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 65.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 216.0) {
                                        if (x[1] <= 5.0) {
                                            if (x[1] <= 3.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 121.0) {
                                                if (x[1] <= 24.5) {
                                                    if (x[1] <= 8.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 14.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 45.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 191.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 234.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #58
                        if (x[1] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 1.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[1] <= 26.5) {
                                    if (x[0] <= 1.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 3.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 8.5) {
                                                if (x[1] <= 5.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 16.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 74.0) {
                                        if (x[0] <= 1.0) {
                                            if (x[1] <= 65.5) {
                                                if (x[1] <= 64.5) {
                                                    if (x[1] <= 32.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 48.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 42.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 143.5) {
                                            if (x[0] <= 1.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 94.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 165.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 177.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 199.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 225.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #59
                        if (x[1] <= 3.0) {
                            if (x[1] <= 1.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[1] <= 143.5) {
                                    if (x[1] <= 61.5) {
                                        if (x[0] <= 1.0) {
                                            if (x[1] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 13.5) {
                                                if (x[1] <= 5.5) {
                                                    if (x[1] <= 4.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 56.0) {
                                                    if (x[1] <= 40.5) {
                                                        if (x[1] <= 26.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 49.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 51.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 64.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 1.0) {
                                                if (x[1] <= 65.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 97.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 192.0) {
                                        if (x[1] <= 184.0) {
                                            if (x[1] <= 165.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 177.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 217.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #60
                        if (x[1] <= 2.5) {
                            if (x[0] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[1] <= 136.0) {
                                    if (x[1] <= 19.0) {
                                        if (x[1] <= 5.5) {
                                            if (x[1] <= 3.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 4.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.0) {
                                            if (x[1] <= 96.5) {
                                                if (x[1] <= 64.5) {
                                                    if (x[1] <= 48.5) {
                                                        if (x[1] <= 32.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 41.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 51.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 56.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 70.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 151.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 165.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 200.5) {
                                                if (x[1] <= 178.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 224.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #61
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[1] <= 3.0) {
                                    if (x[1] <= 1.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 49.0) {
                                        if (x[1] <= 32.5) {
                                            if (x[1] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 65.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 97.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 4.0) {
                                    if (x[1] <= 1.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 26.5) {
                                        if (x[1] <= 19.0) {
                                            if (x[1] <= 8.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 14.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 41.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 51.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 67.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 94.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 125.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 151.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 171.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 184.0) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 209.0) {
                                                                            votes[3] += 1;
                                                                        }

                                                                        else {
                                                                            votes[3] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #62
                        if (x[1] <= 3.0) {
                            if (x[0] <= 1.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[1] <= 143.5) {
                                    if (x[1] <= 58.5) {
                                        if (x[0] <= 1.0) {
                                            if (x[1] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 19.0) {
                                                if (x[1] <= 5.5) {
                                                    if (x[1] <= 4.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 40.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 49.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 51.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.0) {
                                            if (x[1] <= 97.0) {
                                                if (x[1] <= 65.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 165.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 178.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 192.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 207.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 225.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #63
                        if (x[1] <= 2.5) {
                            if (x[1] <= 1.5) {
                                if (x[1] <= 0.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[1] <= 3.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 4.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 136.0) {
                                            if (x[1] <= 117.5) {
                                                if (x[1] <= 40.5) {
                                                    if (x[1] <= 24.5) {
                                                        if (x[1] <= 11.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 1.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 54.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 70.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 94.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 225.5) {
                                                if (x[1] <= 207.5) {
                                                    if (x[1] <= 178.0) {
                                                        if (x[1] <= 151.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 165.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 192.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #64
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[1] <= 3.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 48.5) {
                                        if (x[1] <= 32.5) {
                                            if (x[1] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 96.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 224.5) {
                                    if (x[1] <= 207.5) {
                                        if (x[1] <= 192.0) {
                                            if (x[1] <= 49.5) {
                                                if (x[1] <= 40.5) {
                                                    if (x[1] <= 2.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 3.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 7.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 16.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 26.5) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 56.0) {
                                                    if (x[1] <= 51.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 70.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 94.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 139.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 177.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 184.0) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 234.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #65
                        if (x[1] <= 3.0) {
                            if (x[1] <= 1.0) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 74.0) {
                                if (x[1] <= 61.5) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 18.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 4.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 30.0) {
                                                if (x[1] <= 5.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 8.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 51.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 56.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[1] <= 65.5) {
                                            if (x[0] <= 1.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 207.5) {
                                    if (x[1] <= 165.0) {
                                        if (x[1] <= 151.5) {
                                            if (x[1] <= 94.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 125.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 178.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 192.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 224.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 234.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #66
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 32.5) {
                                        if (x[1] <= 18.0) {
                                            if (x[1] <= 2.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 48.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 65.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 97.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 3.5) {
                                    if (x[1] <= 2.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 184.0) {
                                        if (x[1] <= 177.0) {
                                            if (x[1] <= 5.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 11.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 165.0) {
                                                        if (x[1] <= 125.5) {
                                                            if (x[1] <= 83.0) {
                                                                if (x[1] <= 38.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 151.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 192.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 234.0) {
                                                if (x[1] <= 216.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #67
                        if (x[1] <= 3.0) {
                            if (x[0] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[1] <= 143.5) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 32.5) {
                                            if (x[1] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 49.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 65.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 97.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 94.5) {
                                            if (x[1] <= 40.5) {
                                                if (x[1] <= 18.5) {
                                                    if (x[1] <= 4.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 51.5) {
                                                    if (x[1] <= 49.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 56.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 70.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 225.5) {
                                        if (x[1] <= 177.0) {
                                            if (x[1] <= 165.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 184.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 192.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 207.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #68
                        if (x[1] <= 61.5) {
                            if (x[1] <= 2.5) {
                                if (x[1] <= 1.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 41.0) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 18.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 3.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 4.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 8.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 14.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 24.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 56.0) {
                                        if (x[1] <= 51.5) {
                                            if (x[1] <= 49.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 96.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 120.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 165.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 234.0) {
                                                if (x[1] <= 224.5) {
                                                    if (x[1] <= 192.0) {
                                                        if (x[1] <= 177.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 184.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 207.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #69
                        if (x[1] <= 2.5) {
                            if (x[0] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 18.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 48.5) {
                                            if (x[1] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 64.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 96.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 8.0) {
                                        if (x[1] <= 4.5) {
                                            if (x[1] <= 3.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 14.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 192.0) {
                                                if (x[1] <= 78.0) {
                                                    if (x[1] <= 19.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 26.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 40.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 146.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 207.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #70
                        if (x[1] <= 2.5) {
                            if (x[0] <= 1.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 18.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 49.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 65.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 151.5) {
                                        if (x[1] <= 113.0) {
                                            if (x[1] <= 51.5) {
                                                if (x[1] <= 8.0) {
                                                    if (x[1] <= 4.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 26.5) {
                                                        if (x[1] <= 16.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 40.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 49.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 56.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 70.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 172.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 192.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 217.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #71
                        if (x[0] <= 2.5) {
                            if (x[1] <= 2.5) {
                                if (x[0] <= 0.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 1.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 97.0) {
                                        if (x[1] <= 48.5) {
                                            if (x[1] <= 32.5) {
                                                if (x[1] <= 18.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 64.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 65.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 40.5) {
                                        if (x[1] <= 26.5) {
                                            if (x[1] <= 16.0) {
                                                if (x[1] <= 4.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 8.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 177.0) {
                                            if (x[1] <= 165.0) {
                                                if (x[1] <= 51.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 56.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 83.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 133.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 199.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 224.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 234.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #72
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 65.5) {
                                        if (x[1] <= 64.5) {
                                            if (x[1] <= 32.5) {
                                                if (x[1] <= 16.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 48.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 3.5) {
                                    if (x[1] <= 2.5) {
                                        if (x[1] <= 1.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 12.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 224.5) {
                                            if (x[1] <= 199.5) {
                                                if (x[1] <= 165.0) {
                                                    if (x[1] <= 49.5) {
                                                        if (x[1] <= 35.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 66.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 94.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 125.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 151.5) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 177.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #73
                        if (x[1] <= 2.5) {
                            if (x[0] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[1] <= 4.5) {
                                    if (x[1] <= 3.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 136.0) {
                                        if (x[0] <= 1.0) {
                                            if (x[1] <= 49.5) {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 97.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 11.5) {
                                                if (x[1] <= 5.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 49.5) {
                                                    if (x[1] <= 33.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 56.0) {
                                                        if (x[1] <= 51.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 70.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 94.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 200.5) {
                                            if (x[1] <= 178.0) {
                                                if (x[1] <= 157.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 225.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #74
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[1] <= 3.0) {
                                    if (x[0] <= 0.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 49.0) {
                                        if (x[1] <= 32.5) {
                                            if (x[1] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 65.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 97.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 3.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 202.0) {
                                        if (x[1] <= 165.0) {
                                            if (x[1] <= 120.5) {
                                                if (x[1] <= 70.5) {
                                                    if (x[1] <= 40.5) {
                                                        if (x[1] <= 26.5) {
                                                            if (x[1] <= 14.0) {
                                                                if (x[1] <= 4.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 8.0) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 19.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 51.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 56.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #75
                        if (x[1] <= 2.5) {
                            if (x[1] <= 1.0) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 61.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 32.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 4.5) {
                                        if (x[1] <= 3.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 40.5) {
                                            if (x[1] <= 26.5) {
                                                if (x[1] <= 8.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 14.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 19.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 49.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 51.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 56.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2.5) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 65.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 151.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 165.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 178.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 209.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 234.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #76
                        if (x[1] <= 3.0) {
                            if (x[0] <= 1.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 61.5) {
                                if (x[1] <= 41.0) {
                                    if (x[1] <= 26.5) {
                                        if (x[0] <= 1.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 16.0) {
                                                if (x[1] <= 8.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 32.5) {
                                            if (x[0] <= 1.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 49.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 51.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 56.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 112.5) {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            if (x[1] <= 65.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 165.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 193.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 225.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #77
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[1] <= 17.0) {
                                    if (x[0] <= 0.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 32.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 48.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 65.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 97.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 234.0) {
                                    if (x[1] <= 199.5) {
                                        if (x[1] <= 83.0) {
                                            if (x[1] <= 54.5) {
                                                if (x[1] <= 26.5) {
                                                    if (x[1] <= 2.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 4.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 13.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 40.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 49.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 139.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 177.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 224.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #78
                        if (x[1] <= 2.5) {
                            if (x[1] <= 1.5) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[0] <= 1.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[1] <= 26.5) {
                                    if (x[0] <= 1.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 14.0) {
                                            if (x[1] <= 5.0) {
                                                if (x[1] <= 3.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 8.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 19.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 74.0) {
                                        if (x[1] <= 57.0) {
                                            if (x[0] <= 1.0) {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 40.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 65.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 133.0) {
                                                if (x[1] <= 94.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 187.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 224.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #79
                        if (x[0] <= 1.5) {
                            if (x[0] <= 0.5) {
                                if (x[1] <= 18.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        if (x[1] <= 48.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 96.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[1] <= 192.0) {
                                    if (x[1] <= 184.0) {
                                        if (x[1] <= 171.0) {
                                            if (x[1] <= 51.5) {
                                                if (x[1] <= 49.5) {
                                                    if (x[1] <= 7.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 16.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 35.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 56.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 70.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 125.5) {
                                                            if (x[1] <= 94.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 151.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 216.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #80
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 97.0) {
                                        if (x[1] <= 49.5) {
                                            if (x[1] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 200.5) {
                                    if (x[1] <= 54.5) {
                                        if (x[1] <= 49.5) {
                                            if (x[1] <= 8.5) {
                                                if (x[1] <= 5.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 21.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 40.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 109.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 171.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 184.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 225.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #81
                        if (x[1] <= 61.5) {
                            if (x[0] <= 1.5) {
                                if (x[1] <= 3.0) {
                                    if (x[0] <= 0.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 32.5) {
                                        if (x[1] <= 18.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 33.0) {
                                    if (x[1] <= 1.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 4.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 11.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 51.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 56.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 65.5) {
                                if (x[1] <= 64.5) {
                                    if (x[0] <= 1.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 136.0) {
                                    if (x[1] <= 97.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 234.0) {
                                        if (x[1] <= 151.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 172.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 192.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 216.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        // tree #82
                        if (x[1] <= 3.0) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 1.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 61.5) {
                                if (x[1] <= 41.0) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 32.5) {
                                            if (x[1] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 16.0) {
                                            if (x[1] <= 5.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 8.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 54.5) {
                                        if (x[1] <= 49.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 65.5) {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 97.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 184.0) {
                                            if (x[1] <= 171.0) {
                                                if (x[1] <= 120.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 192.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 216.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #83
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 32.5) {
                                        if (x[1] <= 2.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 49.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 96.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 225.5) {
                                    if (x[1] <= 207.5) {
                                        if (x[1] <= 192.0) {
                                            if (x[1] <= 178.0) {
                                                if (x[1] <= 113.0) {
                                                    if (x[1] <= 70.5) {
                                                        if (x[1] <= 54.5) {
                                                            if (x[1] <= 28.0) {
                                                                if (x[1] <= 2.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 5.0) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 151.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 165.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #84
                        if (x[0] <= 1.5) {
                            if (x[1] <= 17.0) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 65.5) {
                                    if (x[1] <= 64.5) {
                                        if (x[1] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 48.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 97.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 73.5) {
                                if (x[0] <= 2.5) {
                                    if (x[1] <= 1.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 3.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 35.5) {
                                                if (x[1] <= 8.5) {
                                                    if (x[1] <= 5.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 16.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 234.0) {
                                    if (x[1] <= 94.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 139.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 216.0) {
                                                if (x[1] <= 177.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 184.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 192.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #85
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[1] <= 17.0) {
                                    if (x[1] <= 1.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 48.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 65.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 225.5) {
                                    if (x[1] <= 41.0) {
                                        if (x[1] <= 21.5) {
                                            if (x[1] <= 2.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 7.5) {
                                                    if (x[1] <= 3.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 94.5) {
                                            if (x[1] <= 67.5) {
                                                if (x[1] <= 51.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 177.0) {
                                                if (x[1] <= 165.0) {
                                                    if (x[1] <= 125.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 151.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 199.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #86
                        if (x[1] <= 2.5) {
                            if (x[1] <= 1.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[1] <= 74.0) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 49.0) {
                                            if (x[1] <= 32.5) {
                                                if (x[1] <= 18.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 65.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 40.5) {
                                            if (x[1] <= 3.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 4.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 5.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 8.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 14.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 19.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    if (x[1] <= 26.5) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 54.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 225.5) {
                                        if (x[1] <= 177.0) {
                                            if (x[1] <= 165.0) {
                                                if (x[1] <= 94.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 133.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 184.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 200.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #87
                        if (x[0] <= 2.5) {
                            if (x[1] <= 3.0) {
                                if (x[1] <= 1.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 64.5) {
                                        if (x[1] <= 32.5) {
                                            if (x[1] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 48.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 65.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 224.5) {
                                        if (x[1] <= 177.0) {
                                            if (x[1] <= 157.5) {
                                                if (x[1] <= 41.0) {
                                                    if (x[1] <= 26.5) {
                                                        if (x[1] <= 13.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 51.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 56.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 70.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 113.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 191.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 207.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 234.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #88
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 97.0) {
                                        if (x[1] <= 16.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 48.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 64.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 65.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 11.5) {
                                    if (x[1] <= 4.5) {
                                        if (x[1] <= 2.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 234.0) {
                                        if (x[1] <= 216.0) {
                                            if (x[1] <= 67.5) {
                                                if (x[1] <= 42.5) {
                                                    if (x[1] <= 26.5) {
                                                        if (x[1] <= 19.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 94.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 133.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 165.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 178.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 192.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #89
                        if (x[1] <= 2.5) {
                            if (x[0] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 1.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 48.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 64.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 65.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 4.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 5.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 191.0) {
                                                if (x[1] <= 139.0) {
                                                    if (x[1] <= 8.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 19.0) {
                                                            if (x[1] <= 14.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 26.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 51.0) {
                                                                    if (x[1] <= 40.5) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 80.0) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 177.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 207.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #90
                        if (x[1] <= 3.0) {
                            if (x[0] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 56.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 32.5) {
                                        if (x[1] <= 18.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 5.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 40.5) {
                                            if (x[1] <= 11.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 24.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2.5) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 65.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 97.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 113.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 192.0) {
                                                if (x[1] <= 163.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 184.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 216.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 234.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #91
                        if (x[1] <= 3.0) {
                            if (x[0] <= 1.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 80.5) {
                                        if (x[1] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 151.5) {
                                        if (x[1] <= 19.0) {
                                            if (x[1] <= 14.0) {
                                                if (x[1] <= 8.5) {
                                                    if (x[1] <= 5.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 26.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 54.5) {
                                                    if (x[1] <= 41.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 70.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 113.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 171.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 184.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 209.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #92
                        if (x[1] <= 2.5) {
                            if (x[0] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 1.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[1] <= 136.0) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 49.0) {
                                            if (x[1] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 32.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 96.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 3.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 14.0) {
                                                if (x[1] <= 8.5) {
                                                    if (x[1] <= 4.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 5.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 24.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 40.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 49.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 78.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 192.0) {
                                        if (x[1] <= 151.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 165.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 184.0) {
                                                    if (x[1] <= 177.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 207.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 225.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #93
                        if (x[1] <= 3.0) {
                            if (x[1] <= 1.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 61.5) {
                                if (x[1] <= 4.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 26.5) {
                                        if (x[1] <= 19.0) {
                                            if (x[1] <= 5.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 14.0) {
                                                    if (x[1] <= 8.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.0) {
                                            if (x[1] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 49.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 51.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 56.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2.5) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 64.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 96.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 234.0) {
                                            if (x[1] <= 177.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 184.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 192.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 216.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #94
                        if (x[1] <= 2.5) {
                            if (x[0] <= 0.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 1.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.5) {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 97.0) {
                                        if (x[1] <= 65.5) {
                                            if (x[1] <= 32.5) {
                                                if (x[1] <= 18.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 48.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 64.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 8.5) {
                                        if (x[1] <= 5.0) {
                                            if (x[1] <= 3.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 26.5) {
                                            if (x[1] <= 16.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 191.0) {
                                                if (x[1] <= 40.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 171.0) {
                                                        if (x[1] <= 67.5) {
                                                            if (x[1] <= 51.5) {
                                                                if (x[1] <= 49.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 113.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 151.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 216.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 234.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #95
                        if (x[0] <= 2.5) {
                            if (x[0] <= 1.5) {
                                if (x[0] <= 0.5) {
                                    if (x[1] <= 18.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 234.0) {
                                    if (x[1] <= 184.0) {
                                        if (x[1] <= 49.5) {
                                            if (x[1] <= 3.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 12.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 26.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 40.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 54.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 70.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 94.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 125.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 163.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 192.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 216.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #96
                        if (x[0] <= 2.5) {
                            if (x[1] <= 2.5) {
                                if (x[1] <= 1.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 49.0) {
                                        if (x[1] <= 32.5) {
                                            if (x[1] <= 18.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 26.5) {
                                        if (x[1] <= 16.0) {
                                            if (x[1] <= 7.5) {
                                                if (x[1] <= 3.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 41.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 78.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 224.5) {
                                                    if (x[1] <= 177.0) {
                                                        if (x[1] <= 165.0) {
                                                            if (x[1] <= 125.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 151.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 184.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 192.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                if (x[1] <= 207.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #97
                        if (x[1] <= 61.5) {
                            if (x[0] <= 1.5) {
                                if (x[1] <= 17.0) {
                                    if (x[1] <= 1.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 32.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 51.5) {
                                        if (x[1] <= 40.5) {
                                            if (x[1] <= 7.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 16.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 26.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 49.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 56.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 73.5) {
                                if (x[1] <= 64.5) {
                                    if (x[0] <= 1.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 1.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 156.5) {
                                    if (x[1] <= 117.5) {
                                        if (x[1] <= 94.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 200.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 224.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 234.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #98
                        if (x[0] <= 2.5) {
                            if (x[1] <= 2.5) {
                                if (x[0] <= 1.5) {
                                    if (x[0] <= 0.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 1.0) {
                                    if (x[1] <= 18.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 80.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 37.0) {
                                        if (x[1] <= 19.0) {
                                            if (x[1] <= 4.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 8.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 14.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 56.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 234.0) {
                                                if (x[1] <= 216.0) {
                                                    if (x[1] <= 94.5) {
                                                        if (x[1] <= 70.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 133.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= 179.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #99
                        if (x[1] <= 3.0) {
                            if (x[0] <= 1.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 1.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 61.5) {
                                if (x[0] <= 1.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 8.5) {
                                        if (x[1] <= 5.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 19.0) {
                                            if (x[1] <= 14.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 35.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 49.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 51.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 56.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 136.0) {
                                    if (x[1] <= 65.5) {
                                        if (x[0] <= 1.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 64.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 97.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 165.0) {
                                        if (x[1] <= 151.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 209.0) {
                                            if (x[1] <= 178.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 234.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #100
                        if (x[0] <= 2.5) {
                            if (x[1] <= 2.5) {
                                if (x[0] <= 1.5) {
                                    if (x[0] <= 0.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 73.5) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 49.0) {
                                            if (x[1] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 49.5) {
                                            if (x[1] <= 14.0) {
                                                if (x[1] <= 8.5) {
                                                    if (x[1] <= 4.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 19.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 35.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 51.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 172.0) {
                                        if (x[1] <= 113.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 151.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 200.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[1] <= 224.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 234.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 78; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                };
            }
        }
    }