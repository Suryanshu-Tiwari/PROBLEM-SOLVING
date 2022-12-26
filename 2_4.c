#include<stdio.h>
void main(){
    char ch=65;
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            printf("%c",ch);
            ch+=1;
        }
        printf("\n");
    }
}