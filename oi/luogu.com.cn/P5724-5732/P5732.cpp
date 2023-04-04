
#include <iostream>

/*! @fn int main();
*  @brief P5732 【深基5.习7】杨辉三角
*  @param[in]  readN  输入整数 N
*  @return			  算法题函数 return 0
*/
int main()
{
    int readN = 0;
    int triangle[21][21] = { 0 };
    triangle[1][1] = 1;
    std::cin >> readN;
    if (readN == 0) {
        std::cout << "0" << std::endl;
    } else {
        std::cout << "1" << std::endl;
    }
    for (int i = 2; i <= readN; i++) {
        for (int j = 1; j <= i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            std::cout << triangle[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
