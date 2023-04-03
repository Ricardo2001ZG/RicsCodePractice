
#include <iostream>
#include <cmath>

/*! @fn long main();
*  @brief P1307 [NOIP2011 普及组] 数字反转
*  @param[in]  readN  输入整数 N
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/

long reverseNum(long n) {
    long i = 0, j = n;
    while (j != 0) {
        i = i * 10 + j % 10;
        j /= 10;
    }
    return i;
}
int main()
{
    long readN = 0, answer = 0;
    std::cin >> readN;
    answer = reverseNum(std::abs(readN));
    if (readN < 0) std::cout << "-";
    std::cout << answer << std::endl;
    return 0;
}
