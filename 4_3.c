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
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    printf("%d",fact(num));
}