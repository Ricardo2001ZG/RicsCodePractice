
#include <iostream>
#include <cmath>

/*! @fn int main();
*  @brief B2029 大象喝水
*  @param[in]  nDepthH      桶的深度
*  @param[in]  nRoundR      桶的底面半径
*  @param[out] nBucketCount 需要桶数
*  @return			        算法题函数 return 0
*/
int main()
{
    int nDepthH = 0, nRoundR = 0, nBucketCount = 0;
    float fBucketCount = 0;
    std::cin >> nDepthH >> nRoundR;
    float fBucketVolume = 3.14 * nRoundR * nRoundR * nDepthH / 1000;
    fBucketCount = 20 / fBucketVolume;
    nBucketCount = ceil(fBucketCount);
    std::cout << nBucketCount << std::endl;
    return 0;
}
