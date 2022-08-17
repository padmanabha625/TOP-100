#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,1,23,45,3,2},i,j;

    int length= sizeof(arr)/sizeof(arr[0]);

    cout<<"elements are:"<<endl;

    for(i=0;i<length;i++){
        for(j=i+1;j<length;j++){
            if(arr[i]==arr[j])

            cout<<arr[j]<<endl;
        }
    }
    return 0;
}