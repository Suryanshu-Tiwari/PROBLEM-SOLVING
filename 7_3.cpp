#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i=0,count=0;
    char str[100];
    cin>>str;
    count=strlen(str);
    char str2[count+1];
    char temp;
    for(i=0;i<count;i++){
        str2[i]=str[count-1-i];
    }
    str2[count]=;
    int x=strcmp(str,str2);
    cout<<str[count];
    if(x==0)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
    return 0;
} 