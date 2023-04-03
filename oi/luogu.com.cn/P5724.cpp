
#include <iostream>

/*! @fn int main();
*  @brief P5724 【深基4.习5】求极差 / 最大跨度值
*  @param[in]  readN  输入整数个数 N
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    int readN = 0, answer = 0;
    std::cin >> readN;
    int maxNum = 0, minNum = 1000;
    for (int i = 1; i <= readN; i++) {
        int readNum = 0;
        std::cin >> readNum;
        if (readNum > maxNum) maxNum = readNum;
        if (readNum < minNum) minNum = readNum;
    }
    answer = maxNum - minNum;
    std::cout << answer << std::endl;
    return 0;
}
