
#include <iostream>

/*! @fn int main();
*  @brief P1205 [USACO1.2] 方块转换 Transformations
*  @param[in] readN 输入整数 n
*  @return			算法题函数 return 0
*/

// Ric：没什么意义不做了

// Code from Blog:
// https://www.luogu.com.cn/blog/157767/solution-p1205

#include<bits/stdc++.h>
using namespace std;
int n;
char a[15][15],b[15][15],c[15][15],d[15][15];
bool work1()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        b[j][n-i+1]=a[i][j];
    }
    for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
     if(b[i][j]!=c[i][j])
     return 0;
     return 1;
}
bool work2()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        b[n-i+1][n-j+1]=a[i][j];
    }
    for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
     if(b[i][j]!=c[i][j])
     return 0;
     return 1;
}
bool work3()
{
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        b[n-j+1][i]=a[i][j];
    }
    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
     if(b[i][j]!=c[i][j])
     return 0;
     return 1;
}
bool work4()
{
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        b[i][n-j+1]=a[i][j];
    }
    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
     if(b[i][j]!=c[i][j])
     return 0;
     return 1;
}
bool work5()
{
	work4();
	for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
      a[i][j]=b[i][j];  
      if(work1())
      return 1;
    for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
      a[i][j]=b[i][j]; 
      if(work2())
      return 1;
    for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
      a[i][j]=b[i][j]; 
      if(work3())
      return 1;
      return 0;
}
bool work6()
{
    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
     if(b[i][j]!=c[i][j])
     return 0;
     return 1;
}
void work()
{
    if(work1())
    {
        cout<<1;
        return ;
    }
    if(work2())
    {
        cout<<2;
        return ;
    }
    if(work3())
    {
    	cout<<3;
    	return ;
	}
	if(work4())
	{
		cout<<4;
		return ;
	}
	if(work5())
	{
		cout<<5;
		return ;
	}
	if(work6())
	{
		cout<<6;
		return ;
	}
	cout<<7;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
     {
     	cin>>a[i][j];
     	d[i][j]=a[i][j];
	 }
      
    for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
      cin>>c[i][j];
    work();
    return 0; //完美的结束QAQ
}
