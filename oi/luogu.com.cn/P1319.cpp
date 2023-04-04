
#include <iostream>

/*! @fn int main();
*  @brief P1319 压缩技术
*  @param[in] readN 输入整数 n
*  @return			算法题函数 return 0
*/
int main()
{
    int readN = 0;;
    int readZero = 0, readOne = 0;
    int linePos = 1, bitCount = 0;
    std::cin >> readN;
    while (bitCount < (readN * readN)) {
        std::cin >> readZero >> readOne;
        while (readZero || readOne) {
            bitCount += 1;
            if (readZero) {
                std::cout << "0";
                readZero -= 1;
            } else if (readOne) {
                std::cout << "1";
                readOne -= 1;
            }
            linePos += 1;
            if (linePos > readN) {
                std::cout << std::endl;
                linePos = 1;
            }
        }
    }
    return 0;
}
