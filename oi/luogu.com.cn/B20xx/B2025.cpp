
#include <iostream>

/*! @fn int main();
*  @brief B2025 输出字符菱形
*  @param[out] szAnswer 输出答案
*  @return			   算法题函数 return 0
*/
int main()
{
    std::string szAnswer = "  *  ";
    std::cout << szAnswer << std::endl;
    szAnswer = " *** ";
    std::cout << szAnswer << std::endl;
    szAnswer = "*****";
    std::cout << szAnswer << std::endl;
    szAnswer = " *** ";
    std::cout << szAnswer << std::endl;
    szAnswer = "  *  ";
    std::cout << szAnswer << std::endl;
    return 0;
}
