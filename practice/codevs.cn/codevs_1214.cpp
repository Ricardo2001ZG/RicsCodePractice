/*
����:Ricardo2001zg
��Ŀ:p1214 �߶θ���
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
    /*�˴���л"��ɾ����//"������"���� ������left �� right ��һ����Ӧ�� ��left��right������ ��ʱ��Ҫ����һ��"*/
    }
    std::sort(linesave,linesave+n,r_comp);
    for(i=0;i<n;++i)
        if(linesave[i].l>=rtemp)/*�˴���л�ɰ���NicoBC "rtemp=0" --> "rtemp=-1000", "if(linesave[i].l>rtemp)" --> "if(linesave[i].l>=rtemp)"*/
        {
            rtemp=linesave[i].r;
            ans+=1;
        }
    std::cout<<ans;
    return 0;
}