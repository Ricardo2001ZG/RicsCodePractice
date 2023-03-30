
#include <iostream>
#include <cmath>

/*! @fn int main();
*  @brief P5707 【深基2.例12】上学迟到
*  @param[in]  fDistanceS  总路程
*  @param[in]  fVelocityV  步行速度 
*  @return			       算法题函数 return 0
*/
int main()
{
    float fDistanceS = 0, fVelocityV = 0, fSpendMinutes = 0;
    int nMinutesAll = 0, nSpendMinutes = 0;
    int nHoursNow = 0, nMinutesNow = 0;
    std::cin >> fDistanceS >> fVelocityV;
    fSpendMinutes = fDistanceS / fVelocityV + 10;
    nSpendMinutes = ceil(fSpendMinutes);
    if (nSpendMinutes > 480) {
        nMinutesAll = 24 * 60;
        nSpendMinutes -= 480;
        nMinutesAll -= nSpendMinutes;
        nHoursNow = nMinutesAll / 60;
        nMinutesNow = nMinutesAll % 60;
    } else {
        nMinutesAll = 8 * 60;
        nMinutesAll -= nSpendMinutes;
        nHoursNow = nMinutesAll / 60;
        nMinutesNow = nMinutesAll % 60;
    }
    if (nHoursNow < 10) {
        std::cout << "0" << nHoursNow;
    } else {
        std::cout << nHoursNow;
    }
    std::cout << ":";
    if (nMinutesNow < 10) {
        std::cout << "0" << nMinutesNow;
    } else {
        std::cout << nMinutesNow;
    }
    std::cout << std::endl;
    return 0;
}
