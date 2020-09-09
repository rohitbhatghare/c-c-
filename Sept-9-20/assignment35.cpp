#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[7],i=0,n;
    cout<<"enter the first element of array"<<endl;
    cin>>n;
    cout<<"First element of array"<<endl;
    for(i=1;i<7;i++)
    {
        a[i]=n;
        n=3*n;

    }
    for(i=0;i<7;i++)
    {


    cout<<"\n"<<a[i];
    }
return 0;
}
