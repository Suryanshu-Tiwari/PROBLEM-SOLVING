#include<stdio.h>
void main(){
    int i,j;
    int space=3;
    for(i=0;i<4-1;i++){
        for(j=0;j<space;j++){
            printf(" ");
        }
        for(j=0;j<2*i+1;j++){
            printf("*");
        }
        space-=1;
        printf("\n");
    }
    int spacex=1;
    for(i=2;i>=1;i--){
        for(j=0;j<=spacex;j++){
            printf(" ");
        }
        spacex+=1;
        for(j=0;j<2*i-1;j++){
        printf("*");
        }
        printf("\n");
    }
}