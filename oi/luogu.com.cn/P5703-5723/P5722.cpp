
#include <iostream>

/*! @fn int main();
*  @brief P1001 P5722 【深基4.例11】数列求和
*  @param[in]  readN  输入整数 n
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    int readN = 0, answer = 0;
    std::cin >> readN;
    for (int i = 1; i <= readN; i++) {
        answer += i;
    }
    std::cout << answer << std::endl;
    return 0;
}
