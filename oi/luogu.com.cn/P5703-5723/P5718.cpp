
#include <iostream>

/*! @fn int main();
*  @brief P5718 【深基4.例2】找最小值
*  @param[in]  readN       输入数字数量 n
*  @param[in]  readNumber  输入数字
*  @param[out] answer      输出答案
*  @return			       算法题函数 return 0
*/
int main()
{
    int readN = 0, readNumber = 0, answer = 1000;
    std::cin >> readN;
    for (int i = 1; i <= readN; i++) {
        std::cin >> readNumber;
        if (readNumber < answer) {
            answer = readNumber;
        }
    }
    std::cout << answer << std::endl;
    return 0;
}
