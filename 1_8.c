#include<stdio.h>
void main(){
    int x,y;
    printf("Enter coordinates in x,y format: ");
    scanf("%d,%d",&x,&y);
    if(x>0&&y>0)
    printf("I Quadrant");
    else if(x<0&&y>0)
    printf("II Quadrant");
    else if(x<0&&y<0)
    printf("III Quadrant");
    else if(x>0&&y<0)
    printf("IV Quadrant");
    else
    printf("Origin");
}