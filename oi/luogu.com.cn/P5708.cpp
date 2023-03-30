
#include <iostream>
#include <cmath>

/*! @fn int main();
*  @brief P5708 【深基2.习2】三角形面积
*  @param[in]  fTriangleA 三角形边长a
*  @param[in]  fTriangleB 三角形边长b
*  @param[in]  fTriangleC 三角形边长c
*  @param[out] dAreaS     三角形面积s    
*  @return			     算法题函数 return 0
*/
int main()
{
    float fTriangleA = 0, fTriangleB = 0, fTriangleC = 0;
    double dAreaS = 0, dTriangleP = 0;
    std::cin >> fTriangleA >> fTriangleB >> fTriangleC;
    dTriangleP = fTriangleA + fTriangleB + fTriangleC;
    dTriangleP /= 2;
    dAreaS = dTriangleP;
    dAreaS *= (dTriangleP - fTriangleA);
    dAreaS *= (dTriangleP - fTriangleB);
    dAreaS *= (dTriangleP - fTriangleC);
    dAreaS = std::sqrt(dAreaS);
    printf("%.1f", dAreaS);
    return 0;
}
