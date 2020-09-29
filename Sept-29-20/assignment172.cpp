#include<iostream>
using namespace std;
int main()
{
    int dn,j,i,n,sum,bi=0;
    cout<<"Enter the number\n";
    cin>>n;
    cout<<"Numbers decimal to binary are :\n";
    for(i=n;i>0;i=i/2)
    {
        dn=n;
        bi=bi+(n%2)*j;
        j=j*10;
        n=n/2;
       }

       cout<<dn<<bi;

    return 0;
}
