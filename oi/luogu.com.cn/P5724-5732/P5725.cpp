
#include <iostream>

/*! @fn int main();
*  @brief P5725 【深基4.习8】求三角形
*  @param[in]  readN  输入整数 N
*  @return			  算法题函数 return 0
*/
int main()
{
    int readN = 0, answer = 0, triangleNum = 1;
    std::cin >> readN;
    for (int i = 1; i <= readN; i++) {
        for (int j = 1; j <= readN; j++) {
            if (triangleNum < 10) std::cout << "0";
            std::cout << triangleNum;
            triangleNum += 1;
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    triangleNum = 1;
    for (int i = 1; i <= readN; i++) {
        for (int j = 1; j <= (readN - i); j++) {
            std::cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            if (triangleNum < 10) std::cout << "0";
            std::cout << triangleNum;
            triangleNum += 1;
        }
        std::cout << std::endl;
    }
    return 0;
}
