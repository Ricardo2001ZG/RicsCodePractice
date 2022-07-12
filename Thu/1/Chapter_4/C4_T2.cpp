/****************************************************************************************
*
*  @file    C4_T2.cpp
*
*  @brief   《程序设计基础》Chapter_4_T2
*
*  @details 题目：
*    2. 4名专家对4款赛车进行评论。
*       A 说：2号赛车是最好的。
*       B 说：4号赛车是最好的。
*       C 说：3号不是最佳赛车。
*       D 说：B 说错了。
*       事实上只有一款赛车最佳，且只有一名专家说对了，其他3人都说错了。
*       请编程输出最佳车的车号，以及哪位专家说对了。
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
    int bCCarAll, bCCar1, bCCar2, bCCar3, bCCar4;
    int bCAll, bC1, bC2, bC3, bC4;
    int nCarNumber = 0;
    char cPeople = 64;
    for (bCCarAll = 1; bCCarAll <= 16; bCCarAll = (bCCarAll << 1))
    {
        bCCar4 = (bCCarAll & 1) >> 0;
        bCCar3 = (bCCarAll & 2) >> 1;
        bCCar2 = (bCCarAll & 4) >> 2;
        bCCar1 = (bCCarAll & 8) >> 3;
        bC1 = bCCar2 & 1;
        bC2 = bCCar4 & 1;
        bC3 = !bCCar3;
        bC4 = !bC2;
        bCAll = bC1 + bC2 + bC3 + bC4;
        if (bCAll == 1)
        {
            if (bCCar1) nCarNumber = 1;
            if (bCCar2) nCarNumber = 2;
            if (bCCar3) nCarNumber = 3;
            if (bCCar4) nCarNumber = 4;
            std::cout << "Car: " << nCarNumber << std::endl;
            if (bC1) cPeople += 1;
            if (bC2) cPeople += 2;
            if (bC3) cPeople += 3;
            if (bC4) cPeople += 4;
            std::cout << "People: " << cPeople << std::endl;
            break;
        }
    }
    return 0;
}
