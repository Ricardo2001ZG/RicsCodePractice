
#include <iostream>

/*! @fn int main();
*  @brief P1554 梦中的统计
*  @param[in]  readM  输入整数 M
*  @param[in]  readN  输入整数 N
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    int readM = 0, readN = 0;
    int numberCount[10] = { 0 };
    std::cin >> readM >> readN;
    for (int i = readM; i <= readN; i++) {
        int readNumber = i;
        while (readNumber != 0) {
            numberCount[readNumber % 10] += 1;
            readNumber /= 10;
        }
    }
    for (int i = 0; i <= 9; i++) {
        std::cout << numberCount[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
