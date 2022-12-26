#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=2*i-1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}