
#include <iostream>

/*! @fn int main();
*  @brief P1001 A+B Problem, 代码可读性模板, 遵循 驼峰命名, Doxygen
*  @param[in]  readA  输入整数 a
*  @param[in]  readA  输入整数 b
*  @param[out] answer 输出答案
*  @return			   算法题函数 return 0
*/
int main()
{
    int readA, readB, answer;
    std::cin >> readA >> readB;
    answer = readA + readB;
    std::cout << answer << std::endl;
    return 0;
}
