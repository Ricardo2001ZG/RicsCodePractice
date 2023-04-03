
#include <iostream>

/*! @fn int main();
*  @brief P1420 最长连号
*  @param[in]  readN  输入整数个数 N
*  @param[in]  readB  输入整数 b
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    int readN = 0, answer = 1;
    int continuousCount = 1;
    long long readNum = 0, lastNum = 0;
    std::cin >> readN;
    if (readN == 1) {
        std::cout << answer << std::endl;
        return 0;
    }
    std::cin >> lastNum;
    for (int i = 2; i <= readN; i++) {
        std::cin >> readNum;
        if ((readNum - lastNum) == 1) {
            continuousCount += 1;
        } else {
            if (continuousCount > answer) answer = continuousCount;
            continuousCount = 1;
        }
        lastNum = readNum;
    }
    if (continuousCount > answer) answer = continuousCount;
    std::cout << answer << std::endl;
    return 0;
}
