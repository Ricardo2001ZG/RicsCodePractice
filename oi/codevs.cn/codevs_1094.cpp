#include<iostream>
#include<string>
struct treep
{
	int a;
	std::string data;
};
struct treepoint {treep t[2048];};
void settree(treepoint &settrees,int deeps,int p)
{
	settrees.t[p*2].data=settrees.t[p].data.substr(0,settrees.t[p].data.size()/2);
	settrees.t[p*2+1].data=settrees.t[p].data.substr(settrees.t[p].data.size()/2,settrees.t[p].data.size());
	if(deeps==1)
	{
		if(settrees.t[p*2].data[0]=='0')settrees.t[p*2].a=0;else settrees.t[p*2].a=1;
		if(settrees.t[p*2+1].data[0]=='0')settrees.t[p*2+1].a=0;else settrees.t[p*2+1].a=1;
		if(settrees.t[p*2].a==settrees.t[p*2+1].a)settrees.t[p].a=settrees.t[p*2].a;
		else settrees.t[p].a=2;
	}
	else
	{
		settree(settrees,deeps-1,p*2);
		settree(settrees,deeps-1,p*2+1);
		if(settrees.t[p*2].a==settrees.t[p*2+1].a)settrees.t[p].a=settrees.t[p*2].a;
		else settrees.t[p].a=2;
	}
};
void prin(treepoint &settrees,int deeps,int p)
{
	if(deeps<0)return;
	prin(settrees,deeps-1,p*2);
	prin(settrees,deeps-1,p*2+1);
	if(settrees.t[p].a==0)std::cout<<'B';
		else if(settrees.t[p].a==1)std::cout<<'I';
			 else std::cout<<'F';
};
main()
{
	int n=0;
	std::cin>>n;
	treepoint settrees;
	int p=1;
	std::cin>>settrees.t[p].data;
	if(n==0)
	{
	    if(settrees.t[p].data[0]=='0')std::cout<<'B';
		else std::cout<<'I';
	}
	else
	{
	settree(settrees,n,p);
	p=1;
	prin(settrees,n,p);
	}
	return 0;
}
