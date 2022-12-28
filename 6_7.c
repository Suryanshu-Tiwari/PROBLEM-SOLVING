#include<stdio.h>
void main(){
    int n,i,j;
    printf("Enter no. of Element: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    int dat[max+1];
    for(i=0;i<=max;i++)
    {
        dat[i]=0;
    }
    for(i=0;i<n;i++){
        dat[arr[i]]++;
    }
    printf("Elements repeated twice: ");
    for(i=0;i<=max;i++){
        if(dat[i]==2)
        printf("%d ",i);
    }
    printf("\nElements not repeated: ");
    for(i=0;i<=max;i++){
        if(dat[i]==1)
        printf("%d ",i);
    }
}