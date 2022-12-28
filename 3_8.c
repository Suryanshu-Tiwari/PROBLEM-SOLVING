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
    int i,n;
    float sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i*(i+1)*(i+2);
    }
    printf("%f",sum);
    return 0;
}