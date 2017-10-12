/*
作者:Ricardo2001zg
题目:p1098 均分纸牌
*/
#include<iostream>
int main()
{
    int p,ctemp,csave,step,i,n;
    p=ctemp=csave=step=n=i=0;
    int datanum[100]={0};
    std::cin>>n;
    for(i=0;i<n;++i)
    {
        std::cin>>datanum[i];
        p+=datanum[i];
    }
    p=p/n;
    for(i=0;i<n;++i)
    {
        ctemp=datanum[i]-p;
        csave+=ctemp;
        if(csave!=0)step++;
    }
    std::cout<<step;
    return 0;
}
