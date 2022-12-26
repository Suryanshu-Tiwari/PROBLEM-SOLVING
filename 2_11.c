#include<stdio.h>
void main(){
    int i,j,k;
    int space=2*(5-1);
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(k=1;k<=space;k++){
            printf(" ");
        }
        space-=2;
        for(j=i;j>=1;j--){
            printf("%d",j);
        }   
        printf("\n");
    }
}