
#include <iostream>

/*! @fn int main();
*  @brief P1047 [NOIP2005 普及组] 校门外的树
*  @param[in]  readL  输入整数 l
*  @param[in]  readM  输入整数 m
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    int readL = 0, readM = 0, answer = 0;
    bool roadTree[10001] = { 0 };
    std::cin >> readL >> readM;
    for (int i = 1; i <= readM; i++) {
        int leftTree = 0, rightTree = 0;
        std::cin >> leftTree >> rightTree;
        for (int j = leftTree; j <= rightTree; j++) {
            roadTree[j] = true;
        }
    }
    for (int i = 0; i <= readL; i++) {
        if (roadTree[i] == false) {
            answer += 1;
        }
    }
    std::cout << answer << std::endl;
    return 0;
}
