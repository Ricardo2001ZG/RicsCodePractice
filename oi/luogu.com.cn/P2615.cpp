
#include <iostream>

/*! @fn int main();
*  @brief P2615 [NOIP2015 提高组] 神奇的幻方
*  @param[in] readN 输入整数 N
*  @return			算法题函数 return 0
*/
int main()
{
    int readN = 0;
    int cube[40][40] = { 0 };
    std::cin >> readN;
    if (readN == 1) {
        std::cout << readN << std::endl;
        return 0;
    }
    int k1PositionX = 1, k1PositionY = readN / 2 + 1;
    cube[k1PositionX][k1PositionY] = 1;
    for (int k = 2; k <= readN * readN; k++) {
        if ((k1PositionX == 1) && (k1PositionY != readN)) {
            k1PositionX = readN;
            k1PositionY += 1;
        } else if ((k1PositionX != 1) && (k1PositionY == readN)) {
            k1PositionX -= 1;
            k1PositionY = 1;
        } else if ((k1PositionX == 1) && (k1PositionY == readN)) {
            k1PositionX += 1;
        } else if ((k1PositionX != 1) && (k1PositionY != readN)) {
            if (cube[k1PositionX - 1][k1PositionY + 1] == 0) {
                k1PositionX -= 1;
                k1PositionY += 1;
            } else {
                k1PositionX += 1;
            }
        }
        cube[k1PositionX][k1PositionY] = k;
    }
    for (int i = 1; i <= readN; i++) {
        for (int j = 1; j <= readN; j++) {
            std::cout << cube[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
