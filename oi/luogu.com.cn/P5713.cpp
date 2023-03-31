
#include <iostream>

/*! @fn int main();
*  @brief P5713 【深基3.例5】洛谷团队系统
*  @param[in]  readA  输入整数 a
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    int readA = 0, answer = 0;
    std::cin >> readA;
    int timesSpendLocal = 5 * readA;
    int timesSpendLuogu = 3 * readA + 11;
    if (timesSpendLocal <= timesSpendLuogu) {
        std::cout << "Local" << std::endl;
    } else {
        std::cout << "Luogu" << std::endl;
    }
    return 0;
}
