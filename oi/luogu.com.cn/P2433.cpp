
#include <iostream>
#include <iomanip>
#include <cmath>

/*! @fn int main();
*  @brief P2433 【深基1-2】小学数学 N 合一
*  @param[in] nProblem 题目编号
*  @return		       算法题函数 return 0
*/
int main() {
    int nProblem;
    std::cin >> nProblem;
    if (nProblem == 1) {
        std::cout << "I love Luogu!" << std::endl;
    } else if (nProblem == 2) {
        std::cout << 2 + 4 << " " << 10 - 2 - 4 << std::endl;
    } else if (nProblem == 3) {
        // std::cout << 3 << " " << 12 << " " << 2 << std::endl;
        std::cout << 3 << std::endl;
        std::cout << 12 << std::endl;
        std::cout << 2 << std::endl;
    } else if (nProblem == 4) {
        double dDrinkAvg = 500.0 / 3;
        std::cout << std::setprecision(6) << dDrinkAvg << std::endl;
    } else if (nProblem == 5) {
        std::cout << (260 + 220) / (20 + 12) << std::endl;
    } else if (nProblem == 6) {
        std::cout << sqrt(6 * 6 + 9 * 9) << std::endl;
    } else if (nProblem == 7) {
        std::cout << 110 << std::endl;
        std::cout << 90 << std::endl;
        std::cout << 0 << std::endl;
    } else if (nProblem == 8) {
        std::cout << 3.141593 * 5 * 2 << std::endl;
        std::cout << 3.141593 * 5 * 5 << std::endl;
        std::cout << 3.141593 * 4 / 3 * 5 * 5 * 5 << std::endl;
    } else if (nProblem == 9) {
        int nPeachCount = 1;
        for (int i = 1; i < 4; i++) {
            nPeachCount += 1;
            nPeachCount *= 2;
        }
        std::cout << nPeachCount << std::endl;
    } else if (nProblem == 10) {
        std::cout << 9 << std::endl;
    } else if (nProblem == 11) {
        std::cout << 100.0 / 3 << std::endl;
    } else if (nProblem == 12) {
        char chAnswer = 'M';
        std::cout << int(chAnswer - 'A' + 1) << std::endl;
        chAnswer = 'A' + 18 - 1;
        std::cout << chAnswer << std::endl;
    } else if (nProblem == 13) {
        double dVolumeV1 = 4.0 / 3 * 3.141593 * 4 * 4 * 4;
        double dVolumeV2 = 4.0 / 3 * 3.141593 * 10 * 10 * 10;
        double dCubeSide = pow(dVolumeV1 + dVolumeV2, 1.0 / 3);
        std::cout << trunc(dCubeSide) << std::endl;
    } else if (nProblem == 14) {
        std::cout << 50 << std::endl;
    }
    return 0;
}
