#include<stdio.h>
void primeNo(int x,int y){
    int i,j;
    
    for(i=x;i<=y;i++){
        int c=0;
        for(j=2;j*j<i;j++){
            if(i%j==0)
            c++;
        }
        if(c==0)
        printf("%d ",i);
    }
}
void main(){
    int a,b;
    printf("Range (a to b): ");
    scanf("%d to %d",&a,&b);
    primeNo(a,b);
}