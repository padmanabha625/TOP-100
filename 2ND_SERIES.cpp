#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if
        (n%2==0)
        {
            n=n/2;
            n=(n-1)*6;
            cout<<n;
        }
        else{
            n=(n-1)/2;
            n=n*7;
            cout<<n;
        }
    return 0;
}