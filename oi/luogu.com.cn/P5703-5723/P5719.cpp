
#include <iostream>

/*! @fn int main();
*  @brief P5719 【深基4.例3】分类平均
*  @param[in]  readN 输入整数 n
*  @param[in]  readK 输入整数 k
*  @param[out] avgA  输出答案 A
*  @param[out] avgB  输出答案 B
*  @return			 算法题函数 return 0
*/
int main()
{
    int readN = 0, readK = 0, countA = 0, countB = 0;
    double avgA = 0, avgB = 0;
    std::cin >> readN >> readK;
    for (int i = 1; i <= readN; i++) {
        if ((i % readK) == 0) {
            countA += 1;
            avgA += (i - avgA) / countA;
        } else {
            countB += 1;
            avgB += (i - avgB) / countB;
        }
    }
    printf("%.1f %.1f", avgA, avgB);
    return 0;
}
