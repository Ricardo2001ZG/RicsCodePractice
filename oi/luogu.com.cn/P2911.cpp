
#include <iostream>

/*! @fn int main();
*  @brief  P2911 [USACO08OCT]Bovine Bones G
*  @return 算法题函数 return 0
*/
int main()
{
    int s1 = 0, s2 = 0, s3 = 0, minSum = 0;
    int diceSum[81] = { 0 };
    std::cin >> s1 >> s2 >> s3;
    for (int i = 1; i <= s1; i++) {
        for (int j = 1; j <= s2; j++) {
            for (int k = 1; k <= s3; k++) {
                diceSum[i + j + k] += 1;
            }
        }
    }
    for (int i = 1; i <= (s1 + s2 + s3); i++) {
        if (diceSum[i] > diceSum[minSum]) {
            minSum = i;
        }
    }
    std::cout << minSum << std::endl;
    return 0;
}
