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
    for(i=1;i<n;i++)
    {
        t=x*(float)(i)/fact(i);
        if(i%2==0)
        se+=t;
        else
        so+=t;
    }
    printf("%f",1+se-so);
    return 0;
}