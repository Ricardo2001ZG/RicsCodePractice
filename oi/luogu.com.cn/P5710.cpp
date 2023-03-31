
#include <iostream>

/*! @fn int main();
*  @brief P5710 【深基3.例2】数的性质
*  @param[in] readA 输入整数 a
*  @return			算法题函数 return 0
*/
int main()
{
    unsigned int readA = 0, rules1 = 0, rules2 = 0;
    std::cin >> readA;
    rules1 = !(readA & 1);
    if ((readA > 4) & (readA <=12)) {
        rules2 = 1;
    }
    std::cout << (rules1 & rules2) << " ";
    std::cout << (rules1 | rules2) << " ";
    std::cout << (rules1 ^ rules2) << " ";
    std::cout << (!(rules1 | rules2)) << std::endl;
    return 0;
}
