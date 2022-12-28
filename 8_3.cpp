#include<iostream>
using namespace std;
int func(int num,int count)
{
    if(count==1)
    return num;
    else
    {
        int sum=0,a,c;
        while(num!=0)
        {
            a=num%10;
            num=num/10;
            c++;
            sum+=a;
        }
        func(sum,c);
    }
}
int main()
{
    int x,num,c=0;
    cin>>num;
    x=num;
    while(num!=0)
        {
            num=num/10;
            c++;
        }
    cout<<func(x,c);
    return 0;
}