#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class SVM {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        float kernels[77] = { 0 };
                        float decisions[3] = { 0 };
                        int votes[3] = { 0 };
                        kernels[0] = compute_kernel(x,   5.52  , -8.13  , -0.56 );
                        kernels[1] = compute_kernel(x,   5.42  , -8.1  , -0.64 );
                        kernels[2] = compute_kernel(x,   5.5  , -8.16  , -0.34 );
                        kernels[3] = compute_kernel(x,   1.27  , -8.31  , -3.48 );
                        kernels[4] = compute_kernel(x,   5.48  , -8.1  , -0.67 );
                        kernels[5] = compute_kernel(x,   1.45  , -6.57  , 2.54 );
                        kernels[6] = compute_kernel(x,   1.63  , -6.54  , 2.7 );
                        kernels[7] = compute_kernel(x,   5.83  , -8.68  , 0.4 );
                        kernels[8] = compute_kernel(x,   5.45  , -8.18  , 0.19 );
                        kernels[9] = compute_kernel(x,   4.96  , -8.08  , -1.04 );
                        kernels[10] = compute_kernel(x,   5.66  , -8.29  , 0.16 );
                        kernels[11] = compute_kernel(x,   1.16  , -8.42  , -3.33 );
                        kernels[12] = compute_kernel(x,   5.49  , -8.13  , 0.05 );
                        kernels[13] = compute_kernel(x,   5.6  , -8.18  , 0.04 );
                        kernels[14] = compute_kernel(x,   1.34  , -8.3  , -3.51 );
                        kernels[15] = compute_kernel(x,   5.58  , -8.02  , 0.03 );
                        kernels[16] = compute_kernel(x,   4.87  , -7.98  , -1.2 );
                        kernels[17] = compute_kernel(x,   1.55  , -6.42  , 2.52 );
                        kernels[18] = compute_kernel(x,   3.81  , -7.29  , 1.19 );
                        kernels[19] = compute_kernel(x,   5.33  , -8.22  , -0.6 );
                        kernels[20] = compute_kernel(x,   5.41  , -8.07  , -0.67 );
                        kernels[21] = compute_kernel(x,   4.81  , -7.91  , -1.42 );
                        kernels[22] = compute_kernel(x,   1.57  , -6.39  , 2.62 );
                        kernels[23] = compute_kernel(x,   4.19  , -7.81  , -1.93 );
                        kernels[24] = compute_kernel(x,   4.18  , 7.76  , -5.45 );
                        kernels[25] = compute_kernel(x,   0.34  , 5.62  , -7.41 );
                        kernels[26] = compute_kernel(x,   0.61  , 5.38  , -6.82 );
                        kernels[27] = compute_kernel(x,   4.77  , 8.01  , -2.43 );
                        kernels[28] = compute_kernel(x,   4.53  , 8.6  , -1.47 );
                        kernels[29] = compute_kernel(x,   4.71  , 8.3  , -1.56 );
                        kernels[30] = compute_kernel(x,   4.41  , 8.35  , -2.97 );
                        kernels[31] = compute_kernel(x,   6.62  , 8.21  , -2.2 );
                        kernels[32] = compute_kernel(x,   4.2  , 7.81  , -4.69 );
                        kernels[33] = compute_kernel(x,   4.4  , 8.03  , -3.81 );
                        kernels[34] = compute_kernel(x,   3.81  , 8.9  , 1.31 );
                        kernels[35] = compute_kernel(x,   4.19  , 7.77  , -5.04 );
                        kernels[36] = compute_kernel(x,   4.97  , 7.98  , -1.66 );
                        kernels[37] = compute_kernel(x,   4.28  , 7.88  , -4.31 );
                        kernels[38] = compute_kernel(x,   6.93  , 8.01  , -1.47 );
                        kernels[39] = compute_kernel(x,   4.66  , 8.15  , -2.6 );
                        kernels[40] = compute_kernel(x,   5.06  , 7.84  , -1.79 );
                        kernels[41] = compute_kernel(x,   -2.31  , 5.64  , -7.35 );
                        kernels[42] = compute_kernel(x,   -1.22  , 8.22  , 0.88 );
                        kernels[43] = compute_kernel(x,   -1.19  , 8.24  , 1.08 );
                        kernels[44] = compute_kernel(x,   4.85  , 7.92  , -2.29 );
                        kernels[45] = compute_kernel(x,   9.81  , 1.73  , -1.69 );
                        kernels[46] = compute_kernel(x,   10.45  , -1.73  , -0.02 );
                        kernels[47] = compute_kernel(x,   10.52  , -2.05  , 0.79 );
                        kernels[48] = compute_kernel(x,   9.49  , 1.7  , -2.94 );
                        kernels[49] = compute_kernel(x,   9.01  , 1.67  , -0.89 );
                        kernels[50] = compute_kernel(x,   10.41  , -2.01  , 0.56 );
                        kernels[51] = compute_kernel(x,   10.43  , 1.92  , -1.91 );
                        kernels[52] = compute_kernel(x,   9.49  , 1.52  , -3.15 );
                        kernels[53] = compute_kernel(x,   10.41  , 1.85  , -2.13 );
                        kernels[54] = compute_kernel(x,   10.29  , -1.92  , -1.11 );
                        kernels[55] = compute_kernel(x,   10.35  , -1.76  , -1.32 );
                        kernels[56] = compute_kernel(x,   9.46  , 1.55  , -0.65 );
                        kernels[57] = compute_kernel(x,   9.91  , 1.88  , -2.17 );
                        kernels[58] = compute_kernel(x,   9.58  , -1.34  , -1.16 );
                        kernels[59] = compute_kernel(x,   9.18  , -1.13  , 0.13 );
                        kernels[60] = compute_kernel(x,   9.99  , 1.91  , -1.47 );
                        kernels[61] = compute_kernel(x,   10.53  , -2.41  , 0.78 );
                        kernels[62] = compute_kernel(x,   9.04  , -1.18  , 0.2 );
                        kernels[63] = compute_kernel(x,   9.51  , -1.07  , -0.58 );
                        kernels[64] = compute_kernel(x,   9.4  , -1.19  , -1.02 );
                        kernels[65] = compute_kernel(x,   8.59  , 2.69  , -1.13 );
                        kernels[66] = compute_kernel(x,   9.56  , -1.03  , -1.13 );
                        kernels[67] = compute_kernel(x,   9.65  , 2.0  , 1.12 );
                        kernels[68] = compute_kernel(x,   8.91  , -1.12  , 0.45 );
                        kernels[69] = compute_kernel(x,   9.56  , -1.07  , -0.98 );
                        kernels[70] = compute_kernel(x,   10.27  , -1.89  , 0.32 );
                        kernels[71] = compute_kernel(x,   9.58  , 1.05  , -3.54 );
                        kernels[72] = compute_kernel(x,   8.41  , 3.11  , -1.09 );
                        kernels[73] = compute_kernel(x,   9.89  , -1.34  , -1.02 );
                        kernels[74] = compute_kernel(x,   10.11  , 1.86  , -1.11 );
                        kernels[75] = compute_kernel(x,   8.37  , 2.54  , -0.7 );
                        kernels[76] = compute_kernel(x,   8.78  , 1.93  , -0.52 );
                        decisions[0] = -0.07634745613
                        + kernels[3]
                        + kernels[5]
                        + kernels[6] * 0.107533219237
                        + kernels[11] * 0.083736875633
                        + kernels[14]
                        + kernels[17]
                        + kernels[22]
                        + kernels[23] * 0.158955849938
                        - kernels[25]
                        - kernels[26]
                        - kernels[38]
                        + kernels[41] * -0.969717279745
                        + kernels[42] * -0.380508665062
                        - kernels[43]
                        ;
                        decisions[1] = 0.001755177975
                        + kernels[0]
                        + kernels[1]
                        + kernels[2]
                        + kernels[4]
                        + kernels[7]
                        + kernels[8]
                        + kernels[9] * 0.421529355599
                        + kernels[10]
                        + kernels[12]
                        + kernels[13]
                        + kernels[15]
                        + kernels[16]
                        + kernels[18]
                        + kernels[19]
                        + kernels[20]
                        + kernels[21]
                        - kernels[46]
                        - kernels[47]
                        - kernels[50]
                        - kernels[54]
                        - kernels[55]
                        - kernels[58]
                        - kernels[59]
                        - kernels[61]
                        - kernels[62]
                        - kernels[63]
                        - kernels[64]
                        + kernels[66] * -0.421529355599
                        - kernels[68]
                        - kernels[69]
                        - kernels[70]
                        - kernels[73]
                        ;
                        decisions[2] = 0.015825820352
                        + kernels[24] * 0.572781743216
                        + kernels[27]
                        + kernels[28]
                        + kernels[29]
                        + kernels[30]
                        + kernels[31]
                        + kernels[32]
                        + kernels[33]
                        + kernels[34] * 0.54915484566
                        + kernels[35]
                        + kernels[36]
                        + kernels[37]
                        + kernels[38]
                        + kernels[39]
                        + kernels[40]
                        + kernels[44]
                        - kernels[45]
                        - kernels[48]
                        - kernels[49]
                        - kernels[51]
                        - kernels[52]
                        + kernels[53] * -0.121936588877
                        - kernels[56]
                        - kernels[57]
                        - kernels[60]
                        - kernels[65]
                        - kernels[67]
                        - kernels[71]
                        - kernels[72]
                        - kernels[74]
                        - kernels[75]
                        - kernels[76]
                        ;
                        votes[decisions[0] > 0 ? 0 : 1] += 1;
                        votes[decisions[1] > 0 ? 0 : 2] += 1;
                        votes[decisions[2] > 0 ? 1 : 2] += 1;
                        int val = votes[0];
                        int idx = 0;

                        for (int i = 1; i < 3; i++) {
                            if (votes[i] > val) {
                                val = votes[i];
                                idx = i;
                            }
                        }

                        return idx;
                    }

                    /**
                    * Predict readable class name
                    */
                    const char* predictLabel(float *x) {
                        return idxToLabel(predict(x));
                    }

                    /**
                    * Convert class idx to readable name
                    */
                    const char* idxToLabel(uint8_t classIdx) {
                        switch (classIdx) {
                            case 0:
                            return "UP";
                            case 1:
                            return "DOWN";
                            case 2:
                            return "HORIZONTAL";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                    /**
                    * Compute kernel between feature vector and support vector.
                    * Kernel type: rbf
                    */
                    float compute_kernel(float *x, ...) {
                        va_list w;
                        va_start(w, 3);
                        float kernel = 0.0;

                        for (uint16_t i = 0; i < 3; i++) {
                            kernel += pow(x[i] - va_arg(w, double), 2);
                        }

                        return exp(-0.001 * kernel);
                    }
                };
            }
        }
    }