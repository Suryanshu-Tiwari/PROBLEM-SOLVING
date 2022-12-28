#include<stdio.h>
int fact(int n)
{
    int f=1;
    int i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int i,n,x;
    float se=0,so=0,t;
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
    {
        t=x*(float)(2*i)/fact(2*i);
        if(i%2==0)
        se+=t;
        else
        so+=t;
    }
    printf("%f",so-se);
    return 0;
}