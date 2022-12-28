#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i,j;
    char s1[100];
    char s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    int dat[26]={0};
    int maxa=s1[0];
    for(i=0;i<strlen(s1);i++){
        dat[s1[i]-64]++;
    }
    for(i=0;i<strlen(s2);i++){
        dat[s2[i]-64]--;
    }
    int count=0;
    for(i=0;i<26;i++){
        if(dat[i]==0)
        count++;
    }
    if(count==26)
    {
        cout<<"Anagram"<<endl;
    }
    else
    {
        cout<<"Not Anagram"<<endl;
        cout<<"Will become Anagram after removing: ";
        for(i=1;i<26;i++)
        {
            if(dat[i]!=0)
            {
                cout<<(char)(i+64)<<" ";
            }
        }
    }
    return 0;
}