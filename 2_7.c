#include<stdio.h>
void main(){
    int n,i,j,space;
    scanf("%d",&n);
    space=n-1;
    for(i=1;i<=n;i++){
        for(j=0;j<space;j++){
            printf(" ");
        }
        space-=1;
        for(j=i;j>=1;j--){
            printf("%d",j);
        }
        for(j=2;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}