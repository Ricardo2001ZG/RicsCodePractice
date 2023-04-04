
#include <iostream>

/*! @fn int main();
*  @brief  P5727 【深基5.例3】冰雹猜想
*  @return 算法题函数 return 0
*/
int main()
{
    int numPosition = 1;
    int arrayNum[1000] = { 0 };
    std::cin >> arrayNum[1];
    while (arrayNum[numPosition] != 1) {
        if (arrayNum[numPosition] & 1) {
            arrayNum[numPosition + 1] = arrayNum[numPosition] * 3 + 1;
        } else {
            arrayNum[numPosition + 1] = arrayNum[numPosition] / 2;
        }
        numPosition += 1;
    }
    for (int i = numPosition; i >= 1; i--) {
        std::cout << arrayNum[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
