
#include <algorithm>
#include <iostream>
#include <cmath>

/*! @fn int main();
*  @brief P5709 【深基2.习6】Apples Prologue / 苹果和虫子
*  @param[in]  appleCount 苹果总数
*  @param[in]  timesSpend 吃完时间
*  @param[in]  timesNow   现在时间
*  @param[out] answer     输出答案
*  @return			      算法题函数 return 0
*/
int main()
{
    int appleCount = 0, timesSpend = 0, timesNow = 0, answer;
    float speedEat = 0;
    std::cin >> appleCount >> timesSpend >> timesNow;
    if (timesSpend > 0) {
        speedEat = 1.0 * timesNow / timesSpend;
        answer = appleCount - ceil(speedEat);
        answer = std::max(answer, 0);
    }
    else {
        answer = 0;
    }
    std::cout << answer << std::endl;
    return 0;
}
