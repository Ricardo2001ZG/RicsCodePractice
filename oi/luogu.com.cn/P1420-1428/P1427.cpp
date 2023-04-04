
#include <iostream>

/*! @fn int main();
*  @brief  P1427 小鱼的数字游戏
*  @return 算法题函数 return 0
*/
int main()
{
    long long gameList[101] = { 0 };
    int readN = 1, listPosition = 0;
    while (readN != 0) {
        std::cin >> readN;
        listPosition += 1;
        gameList[listPosition] = readN;
    }
    for (int i = listPosition - 1; i >= 1; i--) {
        std::cout << gameList[i] << " ";
    }
    return 0;
}
