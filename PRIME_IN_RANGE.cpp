#include<iostream>
using namespace std;

int main(){
    int low,high,i;
    bool is_prime =true;

    cout<<"range:"<<endl;
    cin>>low>>high;


    while(low<high){
        is_prime = true;


        if(low==0 || low==1){
            is_prime = false;
        }
        for (i=2;i<=low/2;i++){
            if(low%i == 0){
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        cout<<low <<endl;
        low++;
    }
    return 0;
}