
#include <iostream>

/*! @fn int main();
*  @brief P5705 【深基2.例7】数字反转
*  @param[in]  strRead  输入字符串
*  @param[out] szAnswer 输出答案
*  @return			    算法题函数 return 0
*/
int main()
{
    std::string strRead;
    std::cin >> strRead;
    for (int i = 1; i <= strRead.length(); i++) {
        std::cout << strRead[strRead.length() - i];
    }
    std::cout << std::endl;
    return 0;
}
