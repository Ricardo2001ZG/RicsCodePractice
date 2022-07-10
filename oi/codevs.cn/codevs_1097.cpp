#include<iostream>
main()
{
	int l,m,i,i1,i2,tl,tr,ans;
	l=m=i=i1=i2=tl=tr=ans=0;
	std::cin>>l>>m;
	int road[10005]={0};
	for (i=1;i<=m;i++)
	{
		std::cin>>tl>>tr;
		if(tl>tr){tr=tl+tr;tl=tr-tl;tr=tr-tl;}
		i1=tl;i2=tr;
		for(i1=tl;i1<=i2;i1++)road[i1]=1;
	}
	for(i=0;i<=l;i++)
		if(road[i]==1)ans++;
	ans=l-ans+1;
	std::cout<<ans;
	return 0;
}
