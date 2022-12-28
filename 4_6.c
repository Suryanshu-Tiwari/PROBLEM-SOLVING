#include<stdio.h>
#include<math.h>
void armstrong(int x,int y){
    int i,j;
    for(i=x;i<=y;i++){
        int a,c,cpy,count=0,arm=0;
        c=i;
        cpy=i;
        while(c!=0){
            c=c/10;
            count++;
        }
        while(cpy!=0){
            a=cpy%10;
            cpy=cpy/10;
            arm+=pow(a,count);
        }
        if(arm==i){
            printf("%d ",i);
        }
    }
}
void main(){
    int a,b;
    printf("Range (a to b): ");
    scanf("%d%d",&a,&b);
    armstrong(a,b);
}