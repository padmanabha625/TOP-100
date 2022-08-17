#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char n[20];
    gets (n);

    int l=0,count=0;
    while (n[l]!='\0')
    {
        l++;
    }
    int f[10]={0};
    for(int i=0;i<l;i++)
    {
        f[n[i]-'0']++;
    }
    for(int i=0;i<1;i++)
    {
        if(f[i]!=n[i]-'0')
        {
            cout<<"0";
            return 0;
        }
    }
    for(int i=0;i<10;i++)
    {
        if(f[i]>0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}