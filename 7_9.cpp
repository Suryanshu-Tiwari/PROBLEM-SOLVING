#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr;
    cout<<"Enter a String: ";
    getline(cin,arr);
    int i,j,k;
    cout<<"All possible prefix are: ";
    for(i=1;i<arr.length();i++)
    {
        cout<<'"';
        for(k=i;k<arr.length();k++)
        {
            cout<<arr[k];
        }
        cout<<'"';
        if(k==arr.length()-1)
        break;
        cout<<",";
    }
    return 0;
}