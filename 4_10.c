#include<stdio.h>
int apowb(int a, int b){
    if(b==0)
    return 1;
    else
    return (a*(apowb(a,b-1)));
}
void main(){
    int a,b;
    printf("Enter space seperated base value and power value: ");
    scanf("%d%d",&a,&b);
    printf("%d to the power %d = %d",a,b,apowb(a,b));
}