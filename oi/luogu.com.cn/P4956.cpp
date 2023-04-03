
#include <iostream>

/*! @fn int main();
*  @brief P4956 [COCI2017-2018#6] Davor
*  @param[in]  readN  输入整数 n
*  @return			  算法题函数 return 0
*/
int main()
{
    int readN = 0;
    std::cin >> readN;
    // 7x+21k => 7(x+3k)
    readN = readN / (7 * 52);
    int k = 1;
    while (k >= 1) {
        for (int x = 100; x >= 1; x--) {
            if ((x + 3 * k) == readN) {
                std::cout << x << std::endl;
                std::cout << k << std::endl;
                return 0;
            }
        }
        k += 1;
    }
    return 0;
}
