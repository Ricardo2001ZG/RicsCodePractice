
#include <iostream>

/*! @fn int main();
*  @brief P5730 【深基5.例10】显示屏
*  @param[in] readN 输入整数 N
*  @return			算法题函数 return 0
*/

char words[10][5][3]=
{
	{//0
		'X','X','X',
		'X','.','X',
		'X','.','X',
		'X','.','X',
		'X','X','X',
	},
	{//1
		'.','.','X',
		'.','.','X',
		'.','.','X',
		'.','.','X',
		'.','.','X',
	},
	{//2
		'X','X','X',
		'.','.','X',
		'X','X','X',
		'X','.','.',
		'X','X','X',
	},
	{//3
		'X','X','X',
		'.','.','X',
		'X','X','X',
		'.','.','X',
		'X','X','X',
	},
	{//4
		'X','.','X',
		'X','.','X',
		'X','X','X',
		'.','.','X',
		'.','.','X',
	},
	{//5
		'X','X','X',
		'X','.','.',
		'X','X','X',
		'.','.','X',
		'X','X','X',
	},
	{//6
		'X','X','X',
		'X','.','.',
		'X','X','X',
		'X','.','X',
		'X','X','X',
	},
	{//7
		'X','X','X',
		'.','.','X',
		'.','.','X',
		'.','.','X',
		'.','.','X',
	},
	{//8
		'X','X','X',
		'X','.','X',
		'X','X','X',
		'X','.','X',
		'X','X','X',
	},
	{//9
		'X','X','X',
		'X','.','X',
		'X','X','X',
		'.','.','X',
		'X','X','X',
	}
};

int main()
{
    int readN = 0, readNum = 0;
    char readChar;
    char screenBuffer[6][500] = { '.' };
    std::cin >> readN;
    for (int i = 1; i <= readN; i++) {
        std::cin >> readChar;
        readNum = readChar - '0';
        for (int j = 1; j <= 5; j++) {
			for (int k = 1; k <= 3; k++) {
				screenBuffer[j][(i - 1) * 4 + k] = words[readNum][j - 1][k - 1];
			}
            screenBuffer[j][i * 4] = '.';
		}
	}
			
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= readN * 4 - 1; j++) {
            std::cout << screenBuffer[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
