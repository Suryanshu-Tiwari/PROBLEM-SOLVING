#include<iostream>
int main()
{
    int arr[]={21,2,3,444,5,6,7,22};
    int i,j,left,right;
    for(i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        int a,count=0,x;
        int c=0;
        x=arr[i];
        int y=arr[i];
        while(y!=0)
        {
            y=y/10;
            count++;
        }
        printf("for element=%d",arr[i]);
        
        while(x!=0)
        {
            a=x%10;
            x=x/10;
            if(arr[i]%a==0)
            c=c+1;
            printf(" digit=%d ------>> %d/%d=%d value of c=%d ",a,arr[i],a,arr[i]%a,c);
        }
        printf("number of zero %d",c);
        if(c=count){
        printf("%d ",arr[i]);
        break;
        }
    }
    return 0;
}