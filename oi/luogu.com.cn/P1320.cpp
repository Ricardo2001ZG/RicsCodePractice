
#include <iostream>
#include <cmath>

/*! @fn int main();
*  @brief P1320 压缩技术（续集版）
*  @param[in] readN 输入整数 n
*  @return			算法题函数 return 0
*/
int main()
{
    int ImageN = 0;
    int bitCount = 0, readPos = 1;
    int readNum[40001] = { 0 };
    char getCharImage = '2', lastChar = '2';
    while (std::cin >> getCharImage) {
        if (lastChar == '2') {
            lastChar = getCharImage;
            if (getCharImage == '1') {
                readNum[readPos] = 0;
                readPos += 1;
            }
        };
        if (getCharImage == lastChar) {
            readNum[readPos] += 1;
        } else {
            readPos += 1;
            readNum[readPos] += 1;
            lastChar = getCharImage;
        }
        bitCount += 1;
    }
    readNum[0] = sqrt(bitCount);
    readPos = 0;
    std::cout << readNum[0] << " ";
    for (int i = 1; i <= 40000; i++) {
        std::cout << readNum[i] << " ";
        readPos += readNum[i];
        if (readPos >= bitCount) break;
    }
    std::cout << std::endl;
    return 0;
}
