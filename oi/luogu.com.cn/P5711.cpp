
#include <iostream>

/*! @fn int main();
*  @brief P5711 【深基3.例3】闰年判断
*  @param[in]  readA  输入整数 a
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    int readA = 0, answer = 0;
    std::cin >> readA;
    if ((readA % 100) != 0) {
        if ((readA % 4) == 0) {
            answer = 1;
        }
    } else {
        if ((readA % 400) == 0) {
            answer = 1;
        }
    }
    std::cout << answer << std::endl;
    return 0;
}
