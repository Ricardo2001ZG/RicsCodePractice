
#include <iostream>
#include <array>

/*! @fn int main();
*  @brief P5723 【深基4.例13】质数口袋
*  @param[in]  readL  输入整数 L
*  @return			  算法题函数 return 0
*/
int main()
{
    int readL = 0, packageL = 0, primeCount = 0;
    std::array<bool, 100001> isPrimeNum;
    isPrimeNum.fill(true);
    std::array<int, 100001> primeNum;
    primeNum.fill(0);
    isPrimeNum[1] = false;
    std::cin >> readL;
    if (readL == 1) {
        std::cout << 0 << std::endl;
        return 0;
    }
    for (int i = 2; i <= readL; i++) {
        if (isPrimeNum[i]) {
            if ((packageL + i) > readL) {
                std::cout << primeCount << std::endl;
                break;
            } else {
                packageL += i;
                std::cout << i << std::endl;
            }
            primeNum[++primeCount] = i;
        }
        for (int j = 1; (j <= primeCount) && (i * primeNum[j] <= readL); j++) {
            isPrimeNum[i * primeNum[j]] = false;
            if (i % primeNum[j] == 0) break;
        }
    }
    return 0;
}
