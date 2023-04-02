
#include <iostream>

/*! @fn int main();
*  @brief P5717 【深基3.习8】三角形分类
*  @param[in]  readA  输入边长 a
*  @param[in]  readB  输入边长 b
*  @param[in]  readC  输入边长 c
*  @return			  算法题函数 return 0
*/
int main()
{
    int readA = 0, readB = 0, readC = 0;
    std::cin >> readA >> readB >> readC;
    // 判断 三角形
    if (!(((readA + readB) > readC) & 
        ((readA + readC) > readB) & 
        ((readB + readC) > readA)
    )) {
        std::cout << "Not triangle" << std::endl;
        return 0;
    }
    // 排序短边
    if (readA > readB) {
        std::swap(readA, readB);
    }
    if (readB > readC) {
        std::swap(readB, readC);
    }
    if (readA > readB) {
        std::swap(readA, readB);
    }
    // 判断 直角、锐角、钝角三角形
    if ((readA * readA + readB * readB) == (readC * readC)) {
        std::cout << "Right triangle" << std::endl;
    } else if ((readA * readA + readB * readB) > (readC * readC)) {
        std::cout << "Acute triangle" << std::endl;
    } else {
        std::cout << "Obtuse triangle" << std::endl;
    }
    // 判断 等腰、等边三角形
    if ((readA == readB) | (readB == readC)) {
        std::cout << "Isosceles triangle" << std::endl;
        if ((readA == readB) & (readB == readC)) {
            std::cout << "Equilateral triangle" << std::endl;
        }
    }
    return 0;
}
