#include<iostream>
using namespace std;
int main(){
    int p;
    cin>>p;
    if(p>=100 &&p<=200)
    {
        int rem = p%4;
        int quo = p/4;

        for(int i=1;i<=4;i++)
        {
            if(i==1 || i==2 || i==3)
            cout<< quo;
            else
            cout<< rem+quo;
        }
    }
    else{
        cout<<"INVALID INPUT";
    }
}