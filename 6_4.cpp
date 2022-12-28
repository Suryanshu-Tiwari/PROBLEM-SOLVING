#include<iostream>
using namespace std;
int main(){
    int p,q,i,j;
    cout<<"Enter order of matrix: ";
    cin>>p>>q;
    int arr[p][q];
    cout<<"Enter elements of matrix: ";
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            cin>>arr[i][j];
        }
    }
    int arrx[p][q];
    for(i=p-1;i>=0;i--){
        for(j=q-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}