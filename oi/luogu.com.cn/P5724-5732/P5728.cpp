
#include <iostream>
#include <cmath>

/*! @fn int main();
*  @brief P5728 【深基5.例5】旗鼓相当的对手
*  @param[in]  readN  输入整数 n
*  @param[out] answer 输出答案
*  @return			  算法题函数 return 0
*/
int main()
{
    int readN = 0, answer = 0;
    int score[1001][3] = { 0 };
    std::cin >> readN;
    for (int i = 1; i <= readN; i++) {
        std::cin >> score[i][0] >> score[i][1] >> score[i][2];
    }
    for (int i = 1; i < readN; i++) {
        for (int j = i + 1; j <= readN; j++) {
            int chs = 0, math = 0, eng = 0;
            chs  = score[j][0] - score[i][0];
            math = score[j][1] - score[i][1];
            eng  = score[j][2] - score[i][2];
            if (
                (abs(chs) <= 5) && 
                (abs(math) <= 5) && 
                (abs(eng) <= 5) && 
                (abs(chs + math + eng) <= 10)
            ) {
                answer += 1;
            }
        }
    }
    std::cout << answer << std::endl;
    return 0;
}
