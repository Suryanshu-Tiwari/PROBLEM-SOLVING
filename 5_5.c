#include<stdio.h>
void main(){
    int i,n;
    printf("Enter No. of elements: ");
    scanf("%d",&n);
    int arr[n];
    if(n%2==0)
    {
        for(i=1;i<=n;i++)
        {
            if(i<=n/2)
            {
                arr[i-1]=2*i-1;
            }
            else
            {
                arr[i-1]=2*(n-i)+2;
            }
        }
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(i<=n/2+1)
            {
                arr[i-1]=2*i-1;
            }
            else
            {
                arr[i-1]=2*(n-i)+2;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}