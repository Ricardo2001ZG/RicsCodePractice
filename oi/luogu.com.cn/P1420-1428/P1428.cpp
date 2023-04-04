
#include <iostream>

/*! @fn int main();
*  @brief P1428 小鱼比可爱
*  @param[in] readN 输入整数 n
*  @return			算法题函数 return 0
*/
int main()
{
    int readN = 0;
    int lovely[101][2] = { 0 };
    std::cin >> readN;
    for (int i = 1; i <= readN; i++) {
        std::cin >> lovely[i][1];
        for (int j = i; j >= 1; j--) {
            if (lovely[j][1] < lovely[i][1]) lovely[i][2] += 1;
        }
        std::cout << lovely[i][2] << " ";
    }
    std::cout << std::endl;
    return 0;
}
