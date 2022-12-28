#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cin>>num;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            int c=0;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                c++;
            }
            if(c==0)
            cout<<i<<" ";

        }
    }
    return 0;
}