
#include <iostream>

/*! @fn int main();
*  @brief P1423 小玉在游泳
*  @param[in]  readS  输入 s
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    double readS = 0, swimAll = 0, swimS = 2;
    int answer = 0;
    std::cin >> readS;
    while (swimAll < readS) {
        answer += 1;
        swimAll += swimS;
        swimS *= 0.98;
    }
    std::cout << answer << std::endl;
    return 0;
}
