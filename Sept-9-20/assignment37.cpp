#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int a[6],b=0,i;
    cout<<"Enter the five elements of array \n";
    for(i=0;i<=5;i++)
    {
        cin>>a[i];
    }
    for(i=5;i>=0;i--)
    {
        cout<<b<<"\t"<<a[i]<<"\n";
        b++;
    }
   return 0;
}
