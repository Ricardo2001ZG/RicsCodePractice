
#include <iostream>

/*! @fn int main();
*  @brief P1089 [NOIP2004 提高组] 津津的储蓄计划
*  @param[in] useMoney 零花钱预算
*  @return			   算法题函数 return 0
*/
int main()
{
    int yearMoney = 0, nowMoney = 0;;
    for (int i = 1; i <= 12; i++) {
        int useMoney = 0;
        std::cin >> useMoney;
        nowMoney += 300;
        nowMoney -= useMoney;
        if (nowMoney < 0) {
            std::cout << "-" << i << std::endl;
            return 0;
        }
        if (nowMoney >= 100) {
            yearMoney = yearMoney + (nowMoney / 100);
            nowMoney = nowMoney % 100;
        }
    }
    std::cout << (yearMoney * 120 + nowMoney) << std::endl;
    return 0;
}
