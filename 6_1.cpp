#include<iostream>
using namespace std;
int main(){
    int p,q,i,j;
    cin>>p>>q;
    int arr[p][q];
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Before Rotation: "<<endl;
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"After Rotation: "<<endl;
    int arrx[q][p];
    for(j=0;j<q;j++){
        for(i=p-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}