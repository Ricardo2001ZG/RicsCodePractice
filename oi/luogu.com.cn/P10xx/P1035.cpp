
#include <iostream>

/*! @fn int main();
*  @brief P1035 [NOIP2002 普及组] 级数求和
*  @param[in]  readK  输入整数 k
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    int readK = 0, answer = 0;
    double sumN = 0;
    std::cin >> readK;
    while (sumN <= readK)
    {
        answer += 1;
        sumN += 1.0 / answer;
    }
    std::cout << answer << std::endl;
    return 0;
}
