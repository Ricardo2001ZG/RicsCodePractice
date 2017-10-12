#include<iostream>
#include<string>
std::string c,k;
int kl,cl,i1,i2;
int main()
{
	std::cin>>k;
	std::cin>>c;
	kl=k.length()-1;
	cl=c.length();
	for(i1=0;i1<=kl;i1++)if(k[i1]>=97)k[i1]-=32;
	i1=0;
	for(i2=0;i2<=cl;i2++)
	{
		if((c[i2]>=97)and(c[i2]<=122)){if((c[i2]-32)<k[i1])c[i2]+=26;}
		else if(c[i2]<k[i1])c[i2]+=26;
		c[i2]=c[i2]-k[i1]+65;
		i1+=1;
		if(i1==(kl+1))i1=0;
	}
	std::cout<<c<<"\n";
	return 0;
} 
