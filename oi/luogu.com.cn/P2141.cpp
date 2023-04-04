
#include <iostream>

/*! @fn int main();
*  @brief P2141 [NOIP2014 普及组] 珠心算测验
*  @param[in]  readN  输入整数 N
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    int readN = 0;
    int numberSave[101] = { 0 };
    bool numberSum[20001] = { 0 };
    std::cin >> readN;
    for (int i = 1; i <= readN; i++) {
        std::cin >> numberSave[i];
        for (int j = (i - 1); j >= 1; j--) {
            numberSum[numberSave[i] + numberSave[j]] = true;
        }
    }
    for (int i = 1; i <= readN; i++) {
        if (numberSum[numberSave[i]] == true) {
            numberSave[0] += 1;
        }
    }
    std::cout << numberSave[0] << std::endl;
}
