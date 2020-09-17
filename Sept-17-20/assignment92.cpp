#include <iostream>
using namespace std;
int main()
{
    int n,a[50],b[50];
    cout<<"Enter the Size of 1st array";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the Size of 2nd array";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cin>>b[i];
    }
    if ((a[0]==b[0]) ||(a[n]==b[n]))
        {


       cout<<"True" ;
    }
    else
        {
            cout<<"False";
        }
return 0;
}
