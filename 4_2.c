#include<stdio.h>
float mean(int arr[],int n){
    int m=0,i;
    for(i=0;i<n;i++)
    {
        m+=arr[i];
        printf("%d ",m);
    }
    return m/(float)n;
}
int median(int arr[],int n){
    int x;
    if(n%2==0)
    {
        x=n/2;
        return arr[x];
    }
    else
    return(arr[n/2]);
}
void main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Mean is = %.2f\n",mean(arr,n));
    printf("Medain is = %d",median(arr,n));
}