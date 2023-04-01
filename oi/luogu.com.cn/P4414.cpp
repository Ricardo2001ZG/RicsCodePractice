
#include <iostream>

/*! @fn int main();
*  @brief [COCI2006-2007#2] ABC
*  @param[in]  readA  输入整数 a
*  @param[in]  readB  输入整数 b
*  @param[in]  readC  输入整数 c
*  @param[in]  strABC 输入顺序字符串
*  @return			  算法题函数 return 0
*/
int main()
{
    int readA = 0, readB = 0, readC = 0;
    std::string strABC = "";
    std::cin >> readA >> readB >> readC;
    std::cin >> strABC;
    if (readA > readB) std::swap(readA, readB);
    if (readB > readC) std::swap(readB, readC);
    if (readA > readB) std::swap(readA, readB);
    for (int i = 0; i < 3; i++) {
        if (strABC[i] == 'A') {
            std::cout << readA << " ";
        } else if (strABC[i] == 'B') {
            std::cout << readB << " ";
        } else if (strABC[i] == 'C') {
            std::cout << readC << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
