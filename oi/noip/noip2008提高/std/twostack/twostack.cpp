#include<cstdio> 
#include<iostream>   
#include<algorithm> 
using namespace std;

int p[1010],col[1010],Min[1010],pai[3][1010],l[3]; /*p���ջ˳��colΪ��ɫ��Min������˵��
													 paiΪ������ջ��lΪ������ջ�ڵĸ�������*/

int wei[10010],las[10010],too[10010];               //��ϣ��wei�����ڱ�������¼λ�ã�
													 //        las��ĳλ���ڱ�����һ��¼λ�ã�
													 //        too�����ͻ����
													 
int n,t=0,should=1;                                      //shouldΪ�ó�ջ�ĵ㣻

void line(int x,int y) {                             //����ͻ��������
	las[++t] = wei[x]; wei[x] = t; too[t] = y;         //��¼��һ��¼λ�ã��ٸ���λ�ã���ȡ��ͻ��
	las[++t] = wei[y]; wei[y] = t; too[t] = x;
}

void draw(int x,int c) {                             //��x Ⱦ����ɫ c��1~2��
	if (!col[x]   )  col[x]=c;             else
	if ( col[x]!=c) {printf("0");exit(0);} else return;//���x ����ɫ�Ҳ�Ϊ c��ô���޽�
	for (int i=wei[x]; i; i=las[i]) draw(too[i],3-c);     //��������ͻ�ĵ㣬Ⱦ����һ����ɫ
}

int main() {
	freopen("twostack.in","r",stdin);;
	freopen("twostack.out","w",stdout);
	scanf("%d",&n);  
	for (int i=1  ; i<=n; i++) scanf("%d",&p[i]);

	Min[n] =  p[n];                             //��� i ~ n ������С�ĵ�Min[i] 
	for (int i=n-1; i>=1; i--) 
		Min[i]=min(Min[i+1],p[i]); 
				   
	pai[1][0]=1002;  col[n+1]=1 ;               //��ʼ��ջ���߽硢ջ�ױ߽�
	pai[2][0]=1002;  p[n+1]=1001;               //�����һλԪ��֮����λ�����Ա���������Ԫ��ѹ��ջ
				   
	for (int i=1  ; i<=n-2; i++)
	for (int j=i+1; j<=n-1; j++) 
		if  (p[i]<p[j]&&Min[j+1]<p[i]) line(i,j);   //ö��ÿ�Ե㣬����г�ͻ�������ߣ������ͻ�� 
  
	for (int i=1  ; i<=n  ; i++)                //����Ⱦɫ�����ֳ�������ջ��Ȼ��ͬʱ���е�ջ����
		if  ( !col[ i ] )  draw(i,1);
  
	//��ѧ�Ĵ��ǽ���abcd�����ж���̰��ģ�⣬���������Ĳ����Ĳ���ѧ�򷨡� ����
	for (int i=1  ; i<=n+1; i++) {              //ģ�ⵥջ��������ͬʱ���У���n+1��Ϊ������Ԫ�س�ջ
		while (1)                                 //�ܳ��ͳ�
			if ( pai[1][l[1]] == should ) {should++; l[1]--; printf("b ");} else
			if ( pai[2][l[2]] == should ) {should++; l[2]--; printf("d ");} else break;
		pai[ col[i] ][ ++l[ col[i] ] ]=p[i];      //��ջ���������У��������������𣡣�����������
		if (i<n+1) printf("%c ", char(2*col[i]+95) );
	}  
}
