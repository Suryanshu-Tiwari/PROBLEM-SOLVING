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
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=(float)(i)/fact(2*i-1);
        if(i%2==0)
        se+=t;
        else
        so+=t;
    }
    printf("%f",so-se);
    return 0;
}