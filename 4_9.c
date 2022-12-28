#include<stdio.h>
int lcm(int a, int b){
    int i,j;
    int lcm,gdc;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            if(i==j&&a%i==0&&b%j==0)
            gdc=i;
        }
    }
    lcm=(a*b)/gdc;
    return lcm;
}
void main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",lcm(a,b));
}