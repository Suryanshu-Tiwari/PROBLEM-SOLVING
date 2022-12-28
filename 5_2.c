#include<stdio.h>
void main(){
    int i,n;
    printf("Enter number of candles: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter size of candle: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    printf("%d",max);
}