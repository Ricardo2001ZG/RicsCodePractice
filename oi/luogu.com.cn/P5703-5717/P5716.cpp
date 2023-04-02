
#include <iostream>

/*! @fn int main();
*  @brief P5716 【深基3.例9】月份天数
*  @param[in]  dateYear  输入年份
*  @param[in]  dateMonth 输入月份
*  @param[out] daysCount 输出当月天数
*  @return			     算法题函数 return 0
*/
int main()
{
    int dateYear = 0, dateMonth = 0, daysCount = 0;
    std::cin >> dateYear >> dateMonth;
    switch (dateMonth) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            daysCount = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysCount = 30;
            break;
        case 2:
            bool leapYear = false;
            if ((dateYear % 100) != 0) {
                if ((dateYear % 4) == 0) {
                    leapYear = true;
                }
            } else {
                if ((dateYear % 400) == 0) {
                    leapYear = true;
                }
            }
            daysCount = 28;
            if (leapYear) {
                daysCount = 29;
            }
            break;
    }
    std::cout << daysCount << std::endl;
    return 0;
}
