
#include <iostream>

/*! @fn int main();
*  @brief P1422 小玉家的电费
*  @param[in]  readA  输入用电数
*  @param[out] answer 输出电费
*  @return			  算法题函数 return 0
*/
int main()
{
    int readA = 0;
    double answer = 0;
    std::cin >> readA;
    if (readA >= 401) {
        answer += (readA - 400) * 0.5663;
        readA = 400;
    }
    if (readA >= 151) {
        answer += (readA - 150) * 0.4663;
        readA = 150;
    }
    answer += readA * 0.4463;
    printf("%.1f", answer);
    return 0;
}
