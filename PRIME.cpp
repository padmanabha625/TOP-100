#include<iostream> 
int main()
{
    int n, i, flag = 0;

    cout<<"Enter a positive integer: "<<endl;
    cin>>(n);

    for(i=2; i<=n/2; ++i)
    {
        // condition for nonprime number
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        cout<<" is a prime number."<<endl;
    else
        cout<<" is not a prime number."<<endl;
    
    return 0;
}