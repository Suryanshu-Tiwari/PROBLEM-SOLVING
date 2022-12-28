#include<iostream>
using namespace std;
int main()
{
    
    char s1[]="Naman",s2[]="Bharadwaj",s3[]="Naman";
    int i=0,j=0,l1=0,l2=0,k=1;
    while(s1[i]!='\0')
    {
        l1++;
        i++;
    }
    while(s3[j]!='\0')
    {
        l2++;
        j++;
    }
    if(l1!=l2)
    cout<<"Not Same";
    else
    {
        for(i=0;i<l1;i++)
        {
            if(s1[i]!=s3[i])
            k=0;
        }
        if(k==0)
        cout<<"Not same";
        else
        cout<<"Same";
    }
    return 0;
}