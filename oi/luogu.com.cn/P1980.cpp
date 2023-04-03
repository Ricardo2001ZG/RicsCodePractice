
#include <iostream>

/*! @fn int main();
*  @brief P1980 [NOIP2013 普及组] 计数问题
*  @param[in]  readN  输入整数 n
*  @param[in]  readX  输入整数 x
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    int readN = 0, readX = 0, answer = 0;
    std::cin >> readN >> readX;
    for (int i1 = 1; i1 <= readN; i1++) {
        int tempN = i1;
        while (tempN != 0) {
            if ((tempN % 10) == readX) answer += 1;
            tempN /= 10;
        }
    }
    std::cout << answer << std::endl;
    return 0;
}
