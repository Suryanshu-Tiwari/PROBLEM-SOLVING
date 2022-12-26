#include<stdio.h>
void main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("*");
    }
    printf("\n");
    int space=n-2;
    for(i=0;i<=space+1;i++){
        for(j=space;j>=1;j--){
            printf(" ");
        }
        space--;
        printf("*");
        printf("\n");
    }
    for(i=1;i<=n;i++){
        printf("*");
    }
    printf("\n");
}