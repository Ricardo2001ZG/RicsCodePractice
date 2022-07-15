/****************************************************************************************
*
*  @file    C4_T3.cpp
*
*  @brief   《程序设计基础》Chapter_4_T3
*
*  @details 题目：
*    3. 5位跳水高手将参加 10m 高台跳水决赛，有好事者让5人据实力预测比赛结果。
*       A 选手说：B第二，我第三。
*       B 选手说：我第二，E第四。
*       C 选手说：我第一，D第二。
*       D 选手说：C最后，我第三。
*       E 选手说：我第四，A第一。
*       决赛成绩公布之后，每位选手的预测都只说对了一半，即一对一错。
*       请编程解出比赛的实际名次。
*
*    [1]吴文虎, 徐明星, 邬晓钧.程序设计基础[M].第4版.北京: 清华大学出版社, 2017: 53
*
*  @author  Ricardo2001zg
*
*  @email   miao@ricardo2001zg.moe
*
*  @license MIT License
*
*  @version 0.1.0
*
****************************************************************************************/
 
#include <iostream>
#include <cmath>
#include <cstring>

/*! @fn int main();
*  @brief  解题函数
*  @return 0        算法题函数 return 0
*/

int main()
{
    // bC : (Bool)Condition
    int bCRank, bNoAnswerFlag;
    int nTempRankAll, nTempRank, nTempPow, nTempi;
    int anRank[6] = {0};
    int anRankCount[6] = {0};
    int bCAll, bC1, bC2, bC3, bC4, bC5;
    for (bCRank = 12345; bCRank <= 54321; bCRank++)
    {
        memset(anRank, 0, sizeof(anRank));
        memset(anRankCount, 0, sizeof(anRankCount));
        bNoAnswerFlag = 0;
        nTempRankAll = bCRank;
        for (nTempi = 1; nTempi <= 5; nTempi++)
        {
            nTempPow = static_cast<int>(std::pow(10, (5 - nTempi)));
            nTempRank = nTempRankAll / nTempPow;
            nTempRankAll -= nTempPow * nTempRank;
            // 第一次写的时候越界，查了半天没搞定
            // 开了 fsanitize 秒解决
            if ((nTempRank <= 0) || (nTempRank > 5))
            {
                bNoAnswerFlag = 1;
                break;
            }
            anRankCount[nTempRank] += 1;
            anRank[nTempi] = nTempRank;
            if (
                (anRankCount[nTempRank] > 1) ||
                (nTempRank > 5) ||
                (nTempRank == 0)
                )
            {
                bNoAnswerFlag = 1;
                break;
            }
        }
        if (bNoAnswerFlag == 1)
        {
            continue;
        }
        // bC : (Bool)Condition
        bCAll = bC1 = bC2 = bC3 = bC4 = bC5 = 0;
        bC1 = ((anRank[2] == 2) && !(anRank[1] == 3)) 
        || (!(anRank[2] == 2) && (anRank[1] == 3));
        bC2 = ((anRank[2] == 2) && !(anRank[5] == 4)) 
        || (!(anRank[2] == 2) && (anRank[5] == 4));
        bC3 = ((anRank[3] == 1) && !(anRank[4] == 2)) 
        || (!(anRank[3] == 1) && (anRank[4] == 2));
        bC4 = ((anRank[3] == 5) && !(anRank[4] == 3)) 
        || (!(anRank[3] == 5) && (anRank[4] == 3));
        bC5 = ((anRank[5] == 4) && !(anRank[1] == 1)) 
        || (!(anRank[5] == 4) && (anRank[1] == 1));
        bCAll = bC1 + bC2 + bC3 + bC4 + bC5;
        if (bCAll != 5)
        {
            bNoAnswerFlag = 1;
            continue;
        }
        std::cout << "Rank: " << std::endl;
        for (nTempi = 1; nTempi <= 5; nTempi++)
        {
            char cTempPeople = 64 + static_cast<char>(nTempi);
            std::cout << cTempPeople << ": " << anRank[nTempi] << std::endl;
        }     
    }
    return 0;
}
