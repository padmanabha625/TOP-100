#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    cin>>k;

    int a[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<k;i++)
    {
        cout<<a[i];
    }
    for(int i=n-1;i>=k;i--)
    {
        cout<<a[i];
    }
    return 0;
}