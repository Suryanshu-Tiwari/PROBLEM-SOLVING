#include<stdio.h>
int gdc(int a, int b){
    int i,j;
    int gdc;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            if(i==j&&a%i==0&&b%j==0)
            gdc=i;
        }
    }
    return gdc;
}
void main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",gdc(a,b));
}