#include<iostream>
#include<string>
using namespace std;
int main(){
    int count=0,i=0;
    string st,st1;
    getline(cin,st);
    for(i=0;i<st.length();i++)
    {
        if(i==0||i==st.length())
        {
            if(st[i]==' ')
            continue
        }
        st1[i]=st[i];

    }
    cout<<st1;
} 