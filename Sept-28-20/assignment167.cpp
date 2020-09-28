#include<iostream>
using namespace std;
int main()
{
    int n,i,ctr=0;
    int mn,mx,sum=0;

    cout<<"Enter the starting and ending range or number : \n";
    cin>>mn>>mx;

    cout<<"Prime numbers are:\n";
    for(n=mn;n<=mx;n++)
    {
        ctr++;
        for(i=2;i<=n/2;i++)
            {
             if(n%i==0)
                {
                 ctr++;
                 break;
             }
        }

         if(ctr==0 && n!= 1)
             cout<<n;
    }
    cout<<"\n";
    return 0;
}
