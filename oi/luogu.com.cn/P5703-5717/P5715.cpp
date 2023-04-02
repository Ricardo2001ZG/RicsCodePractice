
#include <iostream>
#include <type_traits>

/*! @fn int main();
*  @brief P5715 【深基3.例8】三位数排序
*  @param[in]  readA  输入整数 a
*  @param[in]  readA  输入整数 b
*  @param[in]  readC  输入整数 c
*  @return			  算法题函数 return 0
*/
int main()
{
    int readA = 0, readB = 0, readC = 0;
    std::cin >> readA >> readB >> readC;
    if (readA > readB) {
        std::swap(readA, readB);
    }
    if (readB > readC) {
        std::swap(readB, readC);
    }
    if (readA > readB) {
        std::swap(readA, readB);
    }
    std::cout << readA << " " << readB << " " << readC << std::endl;
    return 0;
}
