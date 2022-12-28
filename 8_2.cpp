#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,p,b,k,count=0;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter value of k: ";
    cin>>k;
    int x=pow(a,b);
    int y=x;
    while(x!=0)
    {
        p=x%10;
        x=x/10;
        count++;
        if(count==k)
        {
        cout<<k<<"th digit from right of "<<y<<" (i.e. "<<a<<" to the power "<<b<<" ) is "<<p;
        break;
        }
    }
    return 0;
}