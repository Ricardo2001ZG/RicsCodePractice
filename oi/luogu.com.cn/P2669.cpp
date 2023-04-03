
#include <iostream>

/*! @fn int main();
*  @brief P2669 [NOIP2015 普及组 T1] 金币
*  @param[in]  readK  输入整数 a
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    int readK = 0, answer = 0, days = 1, dayGets = 1,dayCoins = 1;
    std::cin >> readK;
    while (dayGets <= dayCoins) {
        answer += dayCoins;
        if (days == readK) break;
        days += 1;
        dayGets += 1;
        if (dayGets > dayCoins) {
            dayGets = 1;
            dayCoins += 1;
        }
    }
    std::cout << answer << std::endl;
    return 0;
}
