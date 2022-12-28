#include<stdio.h>
void pal(int n){
    int a,x,rev=0;
    x=n;
    while(n!=0){
        a=n%10;
        n=n/10;
        rev=(rev*10)+a;
    }
    if(x==rev)
    printf("Palindrome");
    else
    printf("Not Palindrome");
    
}
void main(){
    int n;
    scanf("%d",&n);
    pal(n);
}