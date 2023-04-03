
#include <iostream>

/*! @fn int main();
*  @brief P5720 【深基4.例4】一尺之棰
*  @param[in]  readA  输入整数 a
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    int readA = 0, answer = 1;
    std::cin >> readA;
    while (readA != 1) {
        readA /= 2;
        answer += 1;
    }
    std::cout << answer << std::endl;
    return 0;
}
