#include <iostream>
using namespace std;
int main()
{
    int n,a[50];
    cout<<"Enter the elemens of array";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    if (a[0]==a[n])
        {


       cout<<"True" ;
    }
    else
        {
            cout<<"False";
        }
return 0;
}
