#include<iostream>
using namespace std;
int main()
{
    int c1=0,lhs=0,rhs=0,a,x,num,c=0;
    cout<<"Enter a odd number: ";
    cin>>num;
    x=num;
    while(num!=0) {
        num/=10;   // num = num /10
        c1++;
    }
    while(x!=0) {
        a=x%10;
        x=x/10;
        c++;
        if(c<(c1/2)+1)
        rhs+=a;
        else if(c>(c1/2)+1)
        lhs+=a;
    }
    if(lhs==rhs){
        cout<<"Balanced Number";
    }
    else{
        cout<<"Not Balanced";
    }
    return 0;
}