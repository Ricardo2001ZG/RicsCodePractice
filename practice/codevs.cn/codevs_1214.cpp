/*
作者:Ricardo2001zg
题目:p1214 线段覆盖
*/
#include<iostream>
#include<algorithm>
struct linelr
{
    int l,r;
};
int r_comp(const linelr & a,const linelr & b)
{
    if(a.r<b.r)return 1;
    if(a.r>b.r)return 0;
    return 0;
}
int main()
{
    int i,ans,n,rtemp;
    i=n=ans=0;
    rtemp=-1000;
    linelr linesave[100];
    std::cin>>n;
    for(i=0;i<n;++i)
    {
    std::cin>>linesave[i].l>>linesave[i].r;
    if(linesave[i].l>linesave[i].r)
        {
            linesave[i].l+=linesave[i].r;
            linesave[i].r=linesave[i].l-linesave[i].r;
            linesave[i].l=linesave[i].l-linesave[i].r;
        }
    /*此处感谢"被删除的//"的提醒"哥们 他给的left 和 right 不一定对应啊 有left比right大的情况 这时候要交换一下"*/
    }
    std::sort(linesave,linesave+n,r_comp);
    for(i=0;i<n;++i)
        if(linesave[i].l>=rtemp)/*此处感谢可爱的NicoBC "rtemp=0" --> "rtemp=-1000", "if(linesave[i].l>rtemp)" --> "if(linesave[i].l>=rtemp)"*/
        {
            rtemp=linesave[i].r;
            ans+=1;
        }
    std::cout<<ans;
    return 0;
}