#include<stdio.h>
void main(){
    int i,j;
    int space=0;
    for(int i=3;i>=1;i--){
        for(j=0;j<space;j++){
            printf(" ");
        }
        space+=1;
        for(j=0;j<2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }



    int spacex=1;
    for(i=2;i<=3;i++){
        for(j=0;j<spacex;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        spacex-=1;
        printf("\n");
    }
    
}