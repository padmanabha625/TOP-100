#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,12,5,40,30,7,5,9,10};
    vector<int> vec;
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
            if(arr[i]%10!=0){
            vec.push_back(arr[i]);
            arr[i]=-1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=-1)
        vec.push_back(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}