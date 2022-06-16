
#include <iostream>

/*! @fn int main();
*  @brief P5704 Ascii Problem
*  @param[in]  cReadA  输入小写字符 a
*  @param[out] cAnswer 输出大写字符
*  @return			   算法题函数 return 0
*/
int main()
{
    char cReadA, cAnswer;
    std::cin >> cReadA;
    cAnswer = cReadA - 32;
    std::cout << cAnswer;
    return 0;
}