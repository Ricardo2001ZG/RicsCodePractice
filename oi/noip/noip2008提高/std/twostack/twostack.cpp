#include<cstdio> 
#include<iostream>   
#include<algorithm> 
using namespace std;

int p[1010],col[1010],Min[1010],pai[3][1010],l[3]; /*p存进栈顺序，col为颜色，Min下文有说；
													 pai为两个单栈，l为两个单栈内的个点数；*/

int wei[10010],las[10010],too[10010];               //哈希表：wei：点在表中最后记录位置；
													 //        las：某位置在表中上一记录位置；
													 //        too：存冲突对象；
													 
int n,t=0,should=1;                                      //should为该出栈的点；

void line(int x,int y) {                             //将冲突点连起来
	las[++t] = wei[x]; wei[x] = t; too[t] = y;         //记录上一记录位置，再更新位置，存取冲突点
	las[++t] = wei[y]; wei[y] = t; too[t] = x;
}

void draw(int x,int c) {                             //将x 染成颜色 c（1~2）
	if (!col[x]   )  col[x]=c;             else
	if ( col[x]!=c) {printf("0");exit(0);} else return;//如果x 有颜色且不为 c那么就无解
	for (int i=wei[x]; i; i=las[i]) draw(too[i],3-c);     //将与它冲突的点，染上另一个颜色
}

int main() {
	freopen("twostack.in","r",stdin);;
	freopen("twostack.out","w",stdout);
	scanf("%d",&n);  
	for (int i=1  ; i<=n; i++) scanf("%d",&p[i]);

	Min[n] =  p[n];                             //求第 i ~ n 点中最小的点Min[i] 
	for (int i=n-1; i>=1; i--) 
		Min[i]=min(Min[i+1],p[i]); 
				   
	pai[1][0]=1002;  col[n+1]=1 ;               //初始化栈顶边界、栈底边界
	pai[2][0]=1002;  p[n+1]=1001;               //对最后一位元素之后那位处理以便最后把所有元素压出栈
				   
	for (int i=1  ; i<=n-2; i++)
	for (int j=i+1; j<=n-1; j++) 
		if  (p[i]<p[j]&&Min[j+1]<p[i]) line(i,j);   //枚举每对点，如果有冲突，则连线（代表冲突） 
  
	for (int i=1  ; i<=n  ; i++)                //进行染色，即分成两个客栈，然后同时进行单栈排序
		if  ( !col[ i ] )  draw(i,1);
  
	//科学的打法是进行abcd优先判定的贪心模拟，以下是伤心病况的不科学打法— —！
	for (int i=1  ; i<=n+1; i++) {              //模拟单栈排序，两个同时进行，到n+1是为了所有元素出栈
		while (1)                                 //能出就出
			if ( pai[1][l[1]] == should ) {should++; l[1]--; printf("b ");} else
			if ( pai[2][l[2]] == should ) {should++; l[2]--; printf("d ");} else break;
		pai[ col[i] ][ ++l[ col[i] ] ]=p[i];      //进栈（就是这行！！！！发现了吗！！！！！！）
		if (i<n+1) printf("%c ", char(2*col[i]+95) );
	}  
}
