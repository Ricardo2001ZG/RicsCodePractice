
#include <iostream>

/*! @fn int main();
*  @brief  P1789 【Mc生存】插火把
*  @return 算法题函数 return 0
*/
int main()
{
    int readN = 0, readM = 0, readK = 0, answer = 0;
    int readPosX = 1, readPosY = 1;
    bool lightMap[101][101] = { 0 };
    std::cin >> readN >> readM >> readK;
    for (int i = 1; i <= readM; i++) {
        std::cin >> readPosX >> readPosY;
        for (int j = (readPosX - 2); j <= (readPosX + 2); j++) {
            if ((j > 0) && (j <= readN)) {
                lightMap[j][readPosY] = true;
            }
        }
        for (int j = (readPosY - 2); j <= (readPosY + 2); j++) {
            if ((j > 0) && (j <= readN)) {
                lightMap[readPosX][j] = true;
            }
        }
        for (int j = (readPosX - 1); j <= (readPosX + 1); j++) {
            for (int k = (readPosY - 1); k <= (readPosY + 1); k++) {
                if ((j > 0) && (j <= readN) && (k > 0) && (k <= readN)) {
                    lightMap[j][k] = true;
                }
            }
        }
    }
    for (int i = 1; i <= readK; i++) {
        std::cin >> readPosX >> readPosY;
        for (int j = (readPosX - 2); j <= (readPosX + 2); j++) {
            for (int k = (readPosY - 2); k <= (readPosY + 2); k++) {
                if ((j > 0) && (j <= readN) && (k > 0) && (k <= readN)) {
                    lightMap[j][k] = true;
                }
            }
        }
    }
    for (int i = 1; i <= readN; i++) {
        for (int j = 1; j <= readN; j++) {
            if (lightMap[i][j] == false) answer += 1;
        }
    }
    std::cout << answer << std::endl;
    return 0;
}
