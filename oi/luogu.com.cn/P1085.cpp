
#include <array>
#include <iostream>

/*! @fn int main();
*  @brief P1085 [NOIP2004 普及组] 不高兴的津津
*  @param[in]  arraySchedule 输入一组日程安排
*  @param[out] dateAnswer    输出答案
*  @return			         算法题函数 return 0
*/
int main()
{
    std::array<int, 7> arraySchedule = {0};
    int moodValueMax = 0, dateAnswer = 0;
    for (int i = 1; i <= 7; i++) {
        int readA = 0, readB = 0;
        std::cin >> readA >> readB;
        arraySchedule[i] = readA + readB;
        if ((arraySchedule[i] > 8) & 
            (arraySchedule[i] > moodValueMax)
        ) {
            moodValueMax = arraySchedule[i];
            dateAnswer = i;
        }
    }
    std::cout << dateAnswer << std::endl;
    return 0;
}
