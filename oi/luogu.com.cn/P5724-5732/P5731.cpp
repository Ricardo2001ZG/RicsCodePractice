
#include <iostream>

/*! @fn int main();
*  @brief P5731 【深基5.习6】蛇形方阵
*  @param[in]  readN  输入整数 n
*  @return			  算法题函数 return 0
*/
int main()
{
    int readN = 0, forwardN = 1;
    int positionX = 1, positionY = 1;
    int martix[10][10] = { 0 };
    std::cin >> readN;
    if (readN == 1) {
        std::cout << "  1" << std::endl;
        return 0;
    }
    for (int i = 1; i <= (readN * readN); i++) {
        martix[positionX][positionY] = i;
        switch (forwardN) {
            case 1:
                if ((positionY + 1 <= readN) && (martix[positionX][positionY + 1] == 0)) {
                    positionY += 1;
                } else {
                    forwardN += 1;
                    positionX += 1;
                }
                break;
            case 2:
                if ((positionX + 1 <= readN) && (martix[positionX + 1][positionY] == 0)) {
                    positionX += 1;
                } else {
                    forwardN += 1;
                    positionY -= 1;
                }
                break;
            case 3:
                if ((positionY - 1 > 0) && (martix[positionX][positionY - 1] == 0)) {
                    positionY -= 1;
                } else {
                    forwardN += 1;
                    positionX -= 1;
                }
                break;
            case 4:
                if ((positionX - 1 > 0) && (martix[positionX - 1][positionY] == 0)) {
                    positionX -= 1;
                } else {
                    forwardN += 1;
                    positionY += 1;
                }
                break;
        }
        if (forwardN > 4) forwardN %= 4;     
    }
    for (int i = 1; i <= readN; i++) {
        for (int j = 1; j <= readN; j++) {
            printf("%3.d", martix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
