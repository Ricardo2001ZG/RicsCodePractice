
#include <iostream>

/*! @fn int main();
*  @brief P3954 [NOIP2017 普及组 T1] 成绩
*  @param[in] nScoreHomework  平时分数
*  @param[in] nScoreExam      小测分数
*  @param[in] nScoreFinalExam 期末分数
*  @param[in] nScoreFinal     总成绩
*  @return			          算法题函数 return 0
*/
int main()
{
    int nScoreHomework = 0, nScoreExam = 0, nScoreFinalExam = 0;
    std::cin >> nScoreHomework >> nScoreExam >> nScoreFinalExam;
    int nScoreFinal = nScoreHomework * 0.2;
    nScoreFinal += nScoreExam * 0.3;
    nScoreFinal += nScoreFinalExam * 0.5;
    std::cout << nScoreFinal << std::endl;
    return 0;
}
