#include<stdio.h>
void main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    printf("%d is greatest.",a);
    else if(b>a&&b>c)
    printf("%d id greatest.",b);
    else
    printf("%d id greatest.",c);
}