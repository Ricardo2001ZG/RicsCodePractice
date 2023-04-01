
#include <iostream>
#include <string>

/*! @fn int main();
*  @brief [NOIP2008 普及组 T1] ISBN 号码
*  @param[in] strISBN 输入 ISBN 号
*  @return			  算法题函数 return 0
*/
int main()
{
    std::string strISBN = "";
    std::cin >> strISBN;
    int verifyCode = strISBN[0] - '0';
    int numberCount = 2;
    for (int i = 2; i <= 4; i++) {
        verifyCode += (strISBN[i] - '0') * numberCount;
        numberCount += 1;
    }
    for (int i = 6; i <= 10; i++) {
        verifyCode += (strISBN[i] - '0') * numberCount;
        numberCount += 1;
    }
    verifyCode = verifyCode % 11;
    if (strISBN[12] == 'X') {
        if (verifyCode == 10) {
            std::cout << "Right" << std::endl;
        } else {
            strISBN[12] = verifyCode + '0';
            std::cout << strISBN << std::endl;
        }
    } else {
        if (strISBN[12] == (verifyCode + '0')) {
            std::cout << "Right" << std::endl;
        } else if (verifyCode == 10) {
            strISBN[12] = 'X';
            std::cout << strISBN << std::endl;
        } else {
            strISBN[12] = verifyCode + '0';
            std::cout << strISBN << std::endl;
        }
    }
    return 0;
}
