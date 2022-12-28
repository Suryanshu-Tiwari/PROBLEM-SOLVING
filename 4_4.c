#include<stdio.h>
void perfectNo(int x,int y){
    int i,j;
    
    for(i=x;i<=y;i++){
        int c=0;
        for(j=1;j<=i;j++){
            if(i%j==0)
            c++;
        }
        if(c%2!=0)
        printf("%d ",i);
    }
}
void main(){
    int a,b;
    printf("Range (a to b): ");
    scanf("%d to %d",&a,&b);
    perfectNo(a,b);
}