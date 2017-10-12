#include<stdio.h>
#include<math.h>
main()
{
	freopen("recruitment.in","r",stdin);
	freopen("recruitment.out","w",stdout);
	long long ans,n,c,k;
	n=c=k=ans=0;
	scanf("%lld",&n);
	for(int i1=1;i1<=n;i1++)
	{
		ans=c=k=0;
		scanf("%lld",&k);
		while(k!=0)
		{
			c=(long long)floor(log((long double)k)/log((long double)2.0));
			ans+=(long long)pow((long double)3.0,(long double)c);
			k-=(long long)pow((long double)2.0,(long double)c);
		}
		printf("%lld\n",ans);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
