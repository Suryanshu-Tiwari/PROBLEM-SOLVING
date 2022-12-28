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
int StrongNo(int n){
    int x,i,a;
    for(i=1;i<=n;i++){
        x=i;
        int sum=0;
        while(x!=0){
            a=x%10;
            x=x/10;
            sum+=fact(a);
        }
        if(sum==i)
        printf("%d ",i);
    }
}
void main(){
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    StrongNo(num);
}