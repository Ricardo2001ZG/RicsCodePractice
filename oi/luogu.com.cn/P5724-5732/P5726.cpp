
#include <iostream>

/*! @fn int main();
*  @brief P5726 【深基4.习9】打分
*  @param[in]  readN  输入评委数量 n
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    int readN = 0, scoreRead = 0, scoreMax = 0, scoreMin = 10;
    double answer = 0;
    std::cin >> readN;
    for (int i = 1; i <= readN; i++) {
        std::cin >> scoreRead;
        answer += 1.0 * (scoreRead - answer) / i;
        if (scoreRead > scoreMax) scoreMax = scoreRead;
        if (scoreRead < scoreMin) scoreMin = scoreRead;
    }
    answer = answer * readN - scoreMax - scoreMin;
    answer = 1.0 * answer / (readN - 2);
    printf("%.2f", answer);
    return 0;
}
