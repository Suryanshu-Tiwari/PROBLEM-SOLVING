#include<stdio.h>
void main(){
    int i,n;
    printf("Enter number of chocolate pieces: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Tastiness level of each piece: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<min)
        min=arr[i];
    }
    printf("%d",min);
}