#include<iostream>
#include<string>
using namespace std;
int main(){
    int count=0,i=0;
    string st;
    getline(cin,st);
    for(i=0;i<st.length();i++)
    {
        if((int)(st[i])==32)
        count++;
    }
    cout<<st.length()-count;
} 