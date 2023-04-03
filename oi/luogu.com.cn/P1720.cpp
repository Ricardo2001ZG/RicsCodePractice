
#include <iostream>

/*! @fn int main();
*  @brief P1720 月落乌啼算钱（斐波那契数列）
*  @param[in]  readN  输入整数 n
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    long long readN = 0, answer = 0;
    long long a = 1, b = 1, c = 2;
    std::cin >> readN;
    if (readN == 0) {
        std::cout << "0.00" << std::endl;
        return 0;
    }
    if (readN < 3) {
        std::cout << "1.00" << std::endl;
        return 0;
    }
    for (long long i = 3; i <= readN; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    answer = c;
    std::cout << answer << ".00" << std::endl;
    return 0;
}
