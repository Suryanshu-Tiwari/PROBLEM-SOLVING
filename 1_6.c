#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter Sides of a Tringle: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c&&c==a)
    printf("Eqilateral Triangle");
    else if(a==b||b==c||c==a)
    printf("Isosceles Triangle");
    else if(a!=b&&b!=c&&c!=a)
    printf("Scalene Triangle");
}