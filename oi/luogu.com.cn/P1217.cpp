
#include <iostream>

/*! @fn int main();
*  @brief P1217 [USACO1.5]回文质数 Prime Palindromes
*  @param[in]  readA  输入整数 a
*  @param[in]  readB  输入整数 b
*  @return			  算法题函数 return 0
*/
int palindromeNum(int n) {
    int i = 0, j = n;
    while (j != 0) {
        i = i * 10 + j % 10;
        j /= 10;
    }
    if (i == n) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int readA = 0, readB = 0, primeCount = 0;
    bool isPrimeNum[9989900];
    for (int i = 0; i <= sizeof(isPrimeNum); i++) {
        isPrimeNum[i] = true;
    }
    int primeNum[9989900] = { 0 };
    std::cin >> readA >> readB;
    if (readB >= 9989900) readB = 9989900;
    for (int i = 2; i <= readB; i++) {
        if (isPrimeNum[i]) {
            if ((palindromeNum(i) == 1) && (i >= readA) && (i <= readB)) {
                std::cout << i << std::endl;
            }
            primeNum[++primeCount] = i;
        }
        for (int j = 1; (j <= primeCount) && (i * primeNum[j] <= readB); j++) {
            isPrimeNum[i * primeNum[j]] = false;
            if (i % primeNum[j] == 0) break;
        }
    }
    return 0;
}
