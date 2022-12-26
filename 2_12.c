#include<stdio.h>
void main(){
    int i,j,k;
    int space=1;
    for(i=6;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(j=1;j<=2*space-3;j++){
            printf(" ");
        }
        space+=1;
        for(j=i;j>=1;j--){
            if(j==6)
            continue;
            else
            printf("%d",j);
        }
        printf("\n");
    }
}