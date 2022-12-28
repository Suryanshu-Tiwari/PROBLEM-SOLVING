#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter Number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp;
    temp=arr[0];
    arr[0]=arr[n-1];
    arr[n-1]=temp;
    cout<<"Final Array: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}