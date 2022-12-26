#include<stdio.h>
void main(){
    int i,j,n;
    scanf("%d",&n);
    int space=n-1;
    for(i=0;i<n;i++){
        for(j=0;j<space;j++){
            printf(" ");
        }
        for(j=0;j<2*i+1;j++){
            printf("*");
        }
        space-=1;
        printf("\n");
    }
}