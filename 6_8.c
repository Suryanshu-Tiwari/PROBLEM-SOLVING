#include<stdio.h>
void main(){
    int m,n,i,j;
    printf("Enter no. of Element of array A: ");
    scanf("%d",&m);
    int a[m];
    printf("Enter Elements of array A: ");
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter no. of Element of array B: ");
    scanf("%d",&n);
    int b[n];
    printf("Enter Elements of array B: ");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    int max1=a[0];
    for(int i=1;i<m;i++){
        if(a[i]>max1)
        max1=a[i];
    }
    int max2=b[0];
    for(int i=1;i<n;i++){
        if(b[i]>max2)
        max2=b[i];
    }
    int size;
    if(max1>=max2)
    size=max1;
    else
    size=max2;
    int dat[size+1];
    // for(i=0;i<=size;i++)
    // {
    //     dat[i]=0;
    // }
    for(i=0;i<m;i++)
    {
        dat[a[i]]=0;
    }
    for(i=0;i<n;i++){
        dat[b[i]]=0;
    }
    for(i=0;i<m;i++)
    {
        dat[a[i]]++;
    }
    for(i=0;i<n;i++){
        dat[b[i]]--;
    }
    printf("Elements in both Array : ");
    for(i=0;i<=size;i++)
    {
        if(dat[i]==0)
        printf("%d ",i);
    }
}