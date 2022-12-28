#include<iostream>
using namespace std;
int main()
{
    int i,j,p,q,sum=0,c=0;
    cout<<"Enter Order: ";
    cin>>p>>q;
    int arr[p][q];
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<p;i++)
    {
        sum+=arr[0][i];
    }
    for(i=0;i<p;i++)
    {
        int sumx=0;
        for(j=0;j<q;j++)
        {
            sumx+=arr[i][j];
        }
        if(sumx!=sum)
        c++;
    }
    if(c==0)
    cout<<"MAGIC MATRIX";
    else
    cout<<"Not a MAGIC MATRIX";

    return 0;
}