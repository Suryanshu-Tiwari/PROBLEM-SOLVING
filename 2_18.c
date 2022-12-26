#include<stdio.h>
#include<string.h>
void main(){
    int i,j;
    char st[100];
    scanf("%s",st);
    for(i=0;i<strlen(st);i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(".");
        }
        for(j=i;j<strlen(st);j++)
        {
            printf("%c",st[j]);
        }
        printf("\n");
    }
}