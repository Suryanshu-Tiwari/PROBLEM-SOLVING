#include<stdio.h>
void main(){
    int i=0,j,count=0;
    int arr[9]={1,0,2,3,0,4,5,0};
    int n=sizeof(arr)/sizeof(int);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
        while(count!=n)
        {
            if(arr[i]==0)
            {
                printf("0 ");
            }
            i++;
            count++;
        }
    }
}