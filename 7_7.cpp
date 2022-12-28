#include<iostream>
using namespace std;
int main()
{
    char s1[]="Sahil",s2[]="Bharadwaj";
    int i=0,j=0,l1=0,l2=0,k=0;
    while(s1[i]!='\0')
    {
        l1++;
        i++;
    }
    while(s2[j]!='\0')
    {
        l2++;
        j++;
    }
    char c[l1+l2];
    for(i=0;i<l1;i++)
    {
        c[k]=s1[i];
        k++;
    }
    for(i=0;i<l2;i++)
    {
        c[k]=s2[i];
        k++;
    }
    for(i=0;i<l1+l2;i++)
    {
        cout<<c[i];
    }
    return 0;
}