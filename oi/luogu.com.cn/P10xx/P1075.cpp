
#include <iostream>

/*! @fn int main();
*  @brief P1075 [NOIP2012 普及组] 质因数分解
*  @param[in]  readN  输入整数 N
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    long long readN = 0, answer = 1;
    std::cin >> readN;
    if (readN == 1) {
        std::cout << answer << std::endl;
        return 0;
    }
    for (long long i = 2; i <= readN; i++) {
        if (readN % i == 0) {
            answer = readN / i;
            break;
        }
    }
    std::cout << answer << std::endl;
    return 0;
}
