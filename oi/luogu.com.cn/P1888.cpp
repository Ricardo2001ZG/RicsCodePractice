
#include <iostream>

/*! @fn int main();
*  @brief P1888 三角函数
*  @param[in]  readA  输入整数 a
*  @param[in]  readB  输入整数 b
*  @param[in]  readC  输入整数 c
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    long long readA = 0, readB = 0, readC = 0, answer = 0;
    long long _gcd = 0;
    std::cin >> readA >> readB >> readC;
    if (readA > readB) std::swap(readA, readB);
    if (readB > readC) std::swap(readB, readC);
    if (readA > readB) std::swap(readA, readB);
    _gcd = gcd(readA, readC);
    std::cout << readA / _gcd << "/" << readC / _gcd << std::endl;
    return 0;
}
