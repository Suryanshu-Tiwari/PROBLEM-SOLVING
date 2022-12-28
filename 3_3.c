#include<stdio.h>
float fact(int n){
    float fac;
    if(n==1||n==0)
    return 1;
    else{
        fac=(float)n*fact(n-1);
        return fac;
    }
}
void main(){
    float sum=0,x,n;
    int i;
    scanf("%f %f",&x,&n);
    for(i=1;i<n;i++){
        sum+=(x*i/(float)(fact(i)));
    }
    printf("%.3f",sum+1);
}