
#include <iostream>

/*! @fn int main();
*  @brief B2005 字符三角形
*  @param[in]  cReadChar 输入字符
*  @param[out] szAnswer 输出答案
*  @return			     算法题函数 return 0
*/
int main()
{
    char cReadChar;
    std::cin >> cReadChar;
    std::string szAnswer = "  ";
    szAnswer += cReadChar;
    szAnswer += "  ";
    std::cout << szAnswer << std::endl;
    szAnswer = " ";
    for (int i = 1; i <= 3; i++) {
        szAnswer += cReadChar;
    }
    std::cout << szAnswer << std::endl;
    szAnswer = "";
    for (int i = 1; i <= 5; i++) {
        szAnswer += cReadChar;
    }
    std::cout << szAnswer << std::endl;
    return 0;
}
