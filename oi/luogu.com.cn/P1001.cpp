
#include <iostream>

/*! @fn int main();
*  @brief P1001 A+B Problem, 代码可读性模板, 遵循匈牙利命名;小驼峰命名;Doxygen
*  @param[in]  nReadA  输入整数 a
*  @param[in]  nReadA  输入整数 b
*  @param[out] nAnswer 输出答案
*  @return			   算法题函数 return 0
*/
int main()
{
    int nReadA, nReadB, nAnswer;
    std::cin >> nReadA >> nReadB;
    nAnswer = nReadA + nReadB;
    std::cout << nAnswer;
    return 0;
}