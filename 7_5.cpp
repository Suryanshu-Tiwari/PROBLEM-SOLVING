#include<iostream>
using namespace std;
#include<string>
int main()
{
    string str;
    getline(cin,str);
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i]>=65&&str[i]<=90)
        cout<<(char)(str[i]+32);
        else if(str[i]>=97&&str[i]<=112)
        cout<<(char)(str[i]-32);
        else
        cout<<str[i];
    }
    return 0;
}