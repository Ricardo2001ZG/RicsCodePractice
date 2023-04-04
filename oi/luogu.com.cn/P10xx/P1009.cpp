
#include <iostream>
#include <array>

/*! @fn int main();
*  @brief P1009 [NOIP1998 普及组] 阶乘之和
*  @param[in]  readN  输入整数 n
*  @return			  算法题函数 return 0
*/

#define highPercisionType std::array<int, 32>

int pow10(int a) {
    int returnNum = 1;
    if (a == 0) return 1;
    for (int i = 1; i <= a; i++) {
        returnNum *= 10;
    }
    return returnNum;
}

void coutArray(highPercisionType mulA) {
    for (int i1 = mulA[0]; i1 >= 1; i1--) {
        if (i1 == mulA[0]) {
            std::cout << mulA[i1];
            continue;
        }
        if (mulA[i1] == 0) {
            if (mulA[0] != 1) {
                std::cout << "0000";
            } else {
                std::cout << "0";
            }
        } else {
            int digitalTemp = mulA[i1];
            bool flagDigital = false;
            for (int i2 = 3; i2 >= 0; i2--) {
                std::cout << digitalTemp / pow10(i2);
                digitalTemp = digitalTemp % pow10(i2);
            }
        }
    }
    std::cout << std::endl;
}

highPercisionType addHighAndHigh(
    highPercisionType addA, 
    highPercisionType addB
) {
    int addPosition = 1;
    while (
        (addPosition <= addA[0]) | 
        (addPosition <= addB[0])
    ) {
        addA[addPosition] += addB[addPosition];
        if ((addA[addPosition] / 10000) != 0) {
            addA[addPosition + 1] += addA[addPosition] / 10000;
            addA[addPosition] = addA[addPosition] % 10000;
            if ((addPosition + 1) >= addA[0]) addA[0] = addPosition + 1;
        }
        if (addPosition > addA[0]) addA[0] = addPosition;
        addPosition += 1;
    }
    return addA;
}

int main()
{
    int readN = 0;
    highPercisionType precisionSum = { 0 }, precisionA = { 0 };
    // 数的位数（4位一组）
    precisionSum[0] = 1;
    precisionA[0] = 1;
    // 初始化
    precisionA[1] = 1;
    std::cin >> readN;
    for (int i1 = 1; i1 <= readN; i1++) {
        highPercisionType precisionTemp = precisionA;
        for (int i2 = 2; i2 <= i1; i2++) {
            precisionA = addHighAndHigh(precisionA, precisionTemp);
        }
        precisionSum = addHighAndHigh(precisionSum, precisionA);
    }
    coutArray(precisionSum);
    return 0;
}
