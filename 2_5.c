#include<stdio.h>
void main(){
    char ch=69;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("%c",ch+j);
        }
        ch-=1;
        printf("\n");
    }
}