
#include <iostream>

/*! @fn int main();
*  @brief P5703 A*B Problem
*  @param[in]  nReadA  输入整数 a
*  @param[in]  nReadA  输入整数 b
*  @param[out] nAnswer 输出答案
*  @return			   算法题函数 return 0
*/
int main()
{
    int nReadA, nReadB, nAnswer;
    std::cin >> nReadA >> nReadB;
    nAnswer = nReadA * nReadB;
    std::cout << nAnswer;
    return 0;
}