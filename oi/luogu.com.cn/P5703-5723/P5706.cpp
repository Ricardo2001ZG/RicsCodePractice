
#include <iostream>

/*! @fn int main();
*  @brief P5706 【深基2.例8】再分肥宅水
*  @param[in]  fDrink    饮料总毫升
*  @param[in]  nPeople   人数
*  @param[out] fAvgDrink 饮料人均毫升
*  @param[out] nCups      总杯子数
*  @return			     算法题函数 return 0
*/
int main()
{
    float fDrink = 0, fAvgDrink = 0;
    int nPeople = 0, nCups = 0;
    std::cin >> fDrink >> nPeople;
    nCups = nPeople * 2;
    fAvgDrink = fDrink / nPeople;
    printf("%.3f\n", fAvgDrink);
    printf("%d", nCups);
    return 0;
}
