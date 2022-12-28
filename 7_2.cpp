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
    char temp;
    if(count%2!=0){
    for(i=0;i<count/2+1;i++){
        temp=str[i];
        str[i]=str[count-1-i];
        str[count-1-i]=temp;
    }
    }
    else{
     for(i=0;i<count/2;i++){
        temp=str[i];
        str[i]=str[count-1-i];
        str[count-1-i]=temp;
    }   
    }
    for(i=0;i<count;i++){
        cout<<str[i];
    }
    return 0;
} 