
#include <iostream>
#include <cmath>

/*! @fn int main();
*  @brief P1161 开灯
*  @param[in]  readN  输入整数 N
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    int readN = 0, answer = 0;
    std::cin >> readN;
    while(readN--) {
        double num = 0;
        int t = 0;
        std::cin >> num >> t;
        for (int i = 1; i <= t; i++) {
            answer ^= int(floor(i * num));
        }
    }
    std::cout << answer << std::endl;
}
