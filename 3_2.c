#include<stdio.h>
int fact(int n){
    int fac;
    if(n==1||n==0)
    return 1;
    else{
        fac=n*fact(n-1);
        return fac;
    }
}
void main(){
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=fact(i)/i;
    }
    printf("%d",sum);
}