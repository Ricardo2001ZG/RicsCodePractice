
#include <iostream>

/*! @fn int main();
*  @brief P5714 【深基3.例7】肥胖问题
*  @param[in]  readWeight 输入整数 a
*  @param[in]  readHeight 输入整数 b
*  @param[out] scoreBMI   输出答案
*  @return			      算法题函数 return 0
*/
int main()
{
    float readWeight = 0, readHeight = 0, scoreBMI = 0;
    std::cin >> readWeight >> readHeight;
    scoreBMI = readWeight / (readHeight * readHeight);
    if (scoreBMI >= 24) {
        std::cout << scoreBMI << std::endl;
        std::cout << "Overweight" << std::endl;
    } else if (scoreBMI >= 18.5) {
        std::cout << "Normal" << std::endl;
    } else {
        std::cout << "Underweight" << std::endl;
    }
    return 0;
}
