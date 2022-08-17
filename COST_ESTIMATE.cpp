#include<iostream>
using namespace std;
int main(){
    int in,e;
    cin>>in;
    cin>>e;

    float int_p=18,ext_p=12,cost=0.0,surface_ar;
    if(in<0 || e<0)
    {
        cout<<"invalid input";
    }
    else if(in==0 && e==0)
    {
        cout<<"cost:0.0";
    }
    else{
        for(int i=0;i<in;i++)
        {
            cin>>surface_ar;
            cost=cost+int_p*surface_ar;
        }
        for(int i=0;i<e;i++)
        {
            cin>>surface_ar;
            cost=cost+ext_p*surface_ar;
        }
        cout<<"total cost"<<cost;
    }
    return 0;
}