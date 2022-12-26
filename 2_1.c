#include<stdio.h>
void main(){
    for(int i=1;i<=4;i++){
        for(int j=i;j<=2*i-1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}