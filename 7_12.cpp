#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr;
    cout<<"Enter a String: ";
    getline(cin,arr);
    int i,j,k=0;
    for(i=0;i<arr.length();i++)
    {
        if(arr[i]>=34&&arr[i]<=47)
        k=1;
    }
    if(arr[0]==95||(arr[0]>=65&&arr[0]<=90)||(arr[0]>=97&&arr[0]<=122))
    k=0;
    else
    k=1;
    if(k=0)
    cout<<"valid";
    else
    cout<<"Not Valid";
    return 0;
}