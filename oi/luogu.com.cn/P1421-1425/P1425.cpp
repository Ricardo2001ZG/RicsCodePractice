
#include <iostream>
#include <cmath>

/*! @fn int main();
*  @brief P1425 小鱼的游泳时间
*  @param[in]  nStartHours   开始的时间（小时）
*  @param[in]  nStartMinutes 开始的时间（分钟）
*  @param[in]  nEndHours     结束的时间（小时）
*  @param[in]  nEndMinutes   结束的时间（分钟）
*  @return			         算法题函数 return 0
*/
int main()
{
    int nStartHours = 0, nStartMinutes = 0;
    int nEndHours = 0, nEndMinutes = 0;
    int nCountHours = 0, nCountMinutes = 0;
    std::cin >> nStartHours >> nStartMinutes >> nEndHours >> nEndMinutes;
    nCountMinutes = nEndHours * 60 + nEndMinutes;
    nCountMinutes -= (nStartHours * 60 + nStartMinutes);
    nCountHours = nCountMinutes / 60;
    nCountMinutes = nCountMinutes % 60;
    std::cout << nCountHours << " " << nCountMinutes << std::endl;
    return 0;
}
