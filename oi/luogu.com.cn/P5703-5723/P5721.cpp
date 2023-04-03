
#include <iostream>

/*! @fn int main();
*  @brief P5721 【深基4.例6】数字直角三角形
*  @param[in] readN 输入整数 n
*  @return			算法题函数 return 0
*/
int main()
{
    int readN = 0, countNumber = 1;
    std::cin >> readN;
    for (int i1 = readN; i1 >= 1; i1--) {
        for (int i2 = 1; i2 <= i1; i2++) {
            if (countNumber < 10) {
                std::cout << "0" << countNumber;
            } else {
                std::cout << countNumber;
            }
            countNumber += 1;
        }
        std::cout << std::endl;
    }
    return 0;
}
