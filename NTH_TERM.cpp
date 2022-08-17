#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0)
    {
        n=n/2;
        n=2*(n-1);
        cout<<n/2;
    }
    else{
        n=(n/2)+1;
        n=2*(n-1);
        cout<<n;
    }
    return 0;
}