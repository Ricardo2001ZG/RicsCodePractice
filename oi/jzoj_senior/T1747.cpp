#include<stdio.h>
int n,k,t,p,i1,i2,a[100000];
main()
{
	scanf("%d%d",&n,&k);
	for(i1=1;i1<=n;i1++)scanf("%d",&a[i1]);
	i2=1;p=1;
	for(i1=1;i1<=k;i1++)
	{
		while(i2!=(n+1))
		{
		if(a[i2]&p)
			{
			if(t==0)t=i2;
			else if(a[t]<=a[i2])
				 {
				 a[i2]-=a[t];
				 a[t]+=a[t];
				 printf("%d %d\n",t,i2);
				 t=0;	
				 }
				 else
				 {
				 a[t]-=a[i2];
				 a[i2]+=a[i2];
				 printf("%d %d\n",i2,t);
				 t=0;	
				 }
			}
		i2+=1;
		}
		p=p << 1;
		i2=1;
	}
	return 0;
}
