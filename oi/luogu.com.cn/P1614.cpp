
#include <iostream>

/*! @fn int main();
*  @brief P1614 爱与愁的心痛
*  @param[in]  readN  输入整数 n
*  @param[in]  readM  输入整数 m
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    long long readN = 0, readM = 0, answer = 3000000;
    int hurtValueArray[30001] = { 0 };
    std::cin >> readN >> readM;
    if (readM == 0) answer = 0;
    for (int i = 1; i <= readN; i++) {
        std::cin >> hurtValueArray[i];
        if (i >= readM) {
            long long hurtValueSum = 0;
            for (int j = 1; j <= readM; j++) {
                hurtValueSum += hurtValueArray[i - j + 1];
            }
            if (hurtValueSum < answer) answer = hurtValueSum;
        }
    }
    std::cout << answer << std::endl;
    return 0;
}
