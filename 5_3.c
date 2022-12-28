#include<stdio.h>
void main(){
    int i,n;
    printf("Enter No. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s1=0,s2=0;
    for(i=0;i<n/2;i++)
        s1+=arr[i];
    for(i=n/2;i<n;i++)
        s2+=arr[i];
    printf("%d",s1*s2);
}