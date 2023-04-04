
#include <iostream>

/*! @fn int main();
*  @brief  P5729 【深基5.例7】工艺品制作
*  @return 算法题函数 return 0
*/
int main()
{
    int readW = 0, readX = 0, readH = 0;
    int readN = 0, answer = 0;
    bool cube[21][21][21] = { 0 };
    std::cin >> readW >> readX >> readH;
    std::cin >> readN;
    for (int n = 1; n <= readN; n++) {
        int x1 = 0, y1 = 0, z1 = 0;
        int x2 = 0, y2 = 0, z2 = 0;
        std::cin >> x1 >> y1 >> z1;
        std::cin >> x2 >> y2 >> z2;
        for (int i = x1; i <= x2; i++)
            for (int j = y1; j <= y2; j++)
                for (int k = z1; k <= z2; k++) {
                    cube[i][j][k] = 1;
                }
    }
    for (int i = 1; i <= readW; i++)
        for (int j = 1; j <= readX; j++)
            for (int k = 1; k <= readH; k++) {
                if (cube[i][j][k] == false) {
                    answer += 1;
                }
            }
    std::cout << answer << std::endl;
}
