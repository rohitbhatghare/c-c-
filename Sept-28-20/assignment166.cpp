#include<iostream>
using namespace std;
int main()
{
    int n,i,ctr=0;
    int mn,mx,sum=0;

    cout<<"Enter the  number : \n";
    cin>>n;
    for(i=2;i<=n/2;i++)
      {
        if(n%i==0)
        {
         ctr++;

            break;
        }
    }
    if(ctr==0 && n!=1)
        cout<<"Prime number\n";
    else
        cout<<"Not a prime number";


    return 0;
}
