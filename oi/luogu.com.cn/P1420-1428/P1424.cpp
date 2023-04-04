
#include <iostream>

/*! @fn int main();
*  @brief P1424 小鱼的航程(改进版)
*  @param[in]  readWeekday  当前日期
*  @param[in]  readDaysSwim 游泳时长
*  @param[out] answer       输出答案
*  @return			        算法题函数 return 0
*/
int main()
{
    int readWeekday = 0, readDaysSwim = 0, answer = 0;
    std::cin >> readWeekday >> readDaysSwim;
    answer = readDaysSwim / 7 * 5 * 250;
    readDaysSwim = readDaysSwim % 7;
    for (int i = 1; i <= readDaysSwim; i++) {
        if ((readWeekday != 6) & (readWeekday != 7)) {
            answer += 250;
        }
        readWeekday += 1;
    }
    std::cout << answer << std::endl;
    return 0;
}
