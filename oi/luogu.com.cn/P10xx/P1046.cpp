
#include <iostream>
#include <array>

/*! @fn int main();
*  @brief P1046 [NOIP2005 普及组 T1] 陶陶摘苹果
*  @param[in]  arrayApples   苹果高度数组
*  @param[in]  taotaosHeight 陶陶的高度
*  @param[out] answer        输出答案
*  @return			         算法题函数 return 0
*/
int main()
{
    std::array<int, 10> arrayApples = { 0 };
    int taotaosHeight = 0, answer = 0;
    for (int i = 1; i <= 10; i++) {
        std::cin >> arrayApples[i];
    }
    std::cin >> taotaosHeight;
    taotaosHeight += 30;
    for (int i = 1; i <= 10; i++) {
        if (taotaosHeight >= arrayApples[i]) {
            answer += 1;
        }
    }
    std::cout << answer << std::endl;
    return 0;
}
