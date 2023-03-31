
#include <iostream>
#include <cmath>

/*! @fn int main();
*  @brief  P1909 [NOIP2016 普及组 T1] 买铅笔
*  @return 算法题函数 return 0
*/
int main()
{
    int pencilNeedCount = 0, pencilNeedMoney = 0;
    int saleCount1 = 0, salePrice1 = 0;
    int saleCount2 = 0, salePrice2 = 0;
    int saleCount3 = 0, salePrice3 = 0;
    std::cin >> pencilNeedCount;
    std::cin >> saleCount1 >> salePrice1;
    std::cin >> saleCount2 >> salePrice2;
    std::cin >> saleCount3 >> salePrice3;
    float tempMoney = ceil(1.0 * pencilNeedCount / saleCount1) * salePrice1;
    pencilNeedMoney = tempMoney;
    tempMoney = ceil(1.0 * pencilNeedCount / saleCount2) * salePrice2;
    if (tempMoney < pencilNeedMoney) {
        pencilNeedMoney = tempMoney;
    }
    tempMoney = ceil(1.0 * pencilNeedCount / saleCount3) * salePrice3;
    if (tempMoney < pencilNeedMoney) {
        pencilNeedMoney = tempMoney;
    }
    std::cout << pencilNeedMoney << std::endl;
    return 0;
}
