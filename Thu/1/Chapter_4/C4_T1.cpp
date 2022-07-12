/****************************************************************************************
*
*  @file    C4_T1.cpp
*
*  @brief   《程序设计基础》Chapter_4_T1
*
*  @details 题目：
*    1. 3个人比饭量大小，每人说了两句话。
*        A 说：B 比我吃得多，C 和我吃得一样多。
*        B 说：A 比我吃得多，A 也比 C 吃得多。
*        C 说：我比 B 吃得多，B 比 A 吃得多。
*        事实上饭量越小的人讲对的话越多。请编程按饭量的大小输出3个人的顺序。
*
*    [1]吴文虎, 徐明星, 邬晓钧.程序设计基础[M].第4版.北京: 清华大学出版社, 2017: 53
*
*  @author  Ricardo2001zg
*
*  @email   miao@ricardo2001zg.moe
*
*  @license MIT License
*
*  @version 1.0.0
*
****************************************************************************************/
 
#include <iostream>

/*! @fn int main();
*  @brief  解题函数
*  @return 0        算法题函数 return 0
*/

int main()
{
    // bC : (Bool)Condition
    int bCAll, bC1, bC2, bC3, bC4, bC5, bC6;
    std::string strAnswer;
    for (bCAll = 0; bCAll <= 64; bCAll++)
    {
        bC6 = (bCAll & 1) >> 0;
        bC5 = (bCAll & 2) >> 1;
        bC4 = (bCAll & 4) >> 2;
        bC3 = (bCAll & 8) >> 3;
        bC2 = (bCAll & 16) >> 4;
        bC1 = (bCAll & 32) >> 5;
        int bCandAll, bC1and2, bC3and4, bC5and6;
        int bCorAll, bC1or2, bC3or4, bC5or6;
        bC1and2 = bC1 && bC2;
        bC3and4 = bC3 && bC4;
        bC5and6 = bC5 && bC6;
        bCandAll = bC1and2 + bC3and4 + bC5and6;
        bC1or2 = bC1 || bC2;
        bC3or4 = bC3 || bC4;
        bC5or6 = bC5 || bC6;
        bCorAll = bC1or2 + bC3or4 + bC5or6;
        // 题目条件
        if (bCandAll != 1)
        {
            continue;
        }
        if (bCorAll != 2)
        {
            continue;
        }
        // 冲突条件
        if (((bC1 && bC6) || (!bC1 && !bC6)) != 1)
        {
            continue;
        }
        if (!(bC2 && bC4) != 1)
        {
            continue;
        }
        if (!(bC3 && bC6) != 1)
        {
            continue;
        }
        std::cout << bCAll << std::endl;
        std::cout << 
            bC1 << " " << bC2 << " " << bC3 << " " << 
            bC4 << " " << bC5 << " " << bC6 << std::endl;
        // 输出条件
        if (bC2)
        {
            if (bC1)
            {
                std::cout << "A = C < B" << std::endl;
            }
            else
            {
                std::cout << "B < A = C" << std::endl;
            }
            continue;
        }
        // 稳妥起见没合并
        // 写完了发现事实上也是不合并可读性和简易性都更好
        if (bC1 && bC5)
        {
            std::cout << "A < B < C" << std::endl;
        }
        if (bC1 && !bC5)
        {
            std::cout << "A < C < B" << std::endl;
        }
        if (!bC1 && !bC4)
        {
            std::cout << "B < A < C" << std::endl;
        }
        if (bC5 && bC4)
        {
            std::cout << "B < C < A" << std::endl;
        }
        if (bC4 && bC1)
        {
            std::cout << "C < A < B" << std::endl;
        }
        if (!bC5 && !bC1)
        {
            std::cout << "C < B < A" << std::endl;
        }
    }
    return 0;
}
