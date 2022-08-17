#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    if(n==1)
    {
        a=3;
    }
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            a=a+5;
        }
        else{
            a=a-2;
        }
    }
    cout<<a;
    return 0;
}