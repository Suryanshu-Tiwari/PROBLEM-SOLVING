#include<stdio.h>
void main(){
    int i,n,temp;
    printf("Enter No. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<n;i+=2)
    {
        if(n%2!=0&&i==n-1)
        break;
        else{
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}