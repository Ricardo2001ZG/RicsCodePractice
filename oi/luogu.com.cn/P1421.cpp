
#include <iostream>

/*! @fn int main();
*  @brief P1421 小玉买文具
*  @param[in]  nMoneyYuan 元
*  @param[in]  nMoneyJiao 角
*  @param[out] nPenCount  输出答案
*  @return			      算法题函数 return 0
*/
int main()
{
    int nMoneyYuan = 0, nMoneyJiao = 0;
    int nMoneyAll = 0, nPenPrice = 19;
    int nPenCount = 0;
    std::cin >> nMoneyYuan >> nMoneyJiao;
    nMoneyAll = nMoneyYuan * 10 + nMoneyJiao;
    nPenCount = nMoneyAll / nPenPrice;
    std::cout << nPenCount << std::endl;
    return 0;
}
