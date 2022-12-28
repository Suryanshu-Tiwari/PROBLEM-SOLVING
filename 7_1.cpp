#include<iostream>
using namespace std;
int main(){
    int i=0,count=0;
    char str[100];
    cin>>str;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    cout<<"Size of string is: "<<count;
    return 0;
} 