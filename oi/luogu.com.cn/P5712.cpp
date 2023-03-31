
#include <iostream>

/*! @fn int main();
*  @brief P5712 【深基3.例4】Apples
*  @param[in]  readA  输入整数 a
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    int readA = 0, answer = 0;
    std::cin >> readA;
    std::cout << "Today, I ate ";
    if (readA > 1) {
        std::cout << readA << " apples.";
    } else {
        std::cout << readA << " apple.";
    }
    return 0;
}
