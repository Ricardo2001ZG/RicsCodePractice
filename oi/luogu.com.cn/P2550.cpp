
#include <iostream>
#include <algorithm>
#include <array>

/*! @fn int main();
*  @brief P2550 [AHOI2001]彩票摇奖
*  @param[in]  ticketN 彩票张数
*  @param[out] answer  输出答案
*  @return			   算法题函数 return 0
*/
int main()
{
    int ticketN = 0;
    std::array<int, 8> awardCount = { 0 };
    std::array<int, 8> awardNum = { 0 };
    std::array<int, 8> ticketNum = { 0 };
    std::cin >> ticketN;
    for (int i = 1; i <= 7; i++) {
        std::cin >> awardNum[i];
    }
    std::sort(&awardNum[1], &awardNum[7]);
    for (int i = 1; i <= ticketN; i++) {
        for (int j = 1; j <= 7; j++) {
            std::cin >> ticketNum[j];
        }
        std::sort(&ticketNum[1], &ticketNum[7]);
        awardCount[0] = 0;
        for (int j = 1; j <= 7; j++) {
            for (int k = 1; k <= 7; k++) {
                if (ticketNum[j] == awardNum[k]) awardCount[0] += 1;
            }
        }
        awardCount[awardCount[0]] += 1;
    }
    std::cout << awardCount[7] << " ";
    for (int i = 6; i >= 1; i--) {
        std::cout << awardCount[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
