#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int a[6],i,temp;
    cout<<"Enter the elements of array \n";
    for(i=0;i<6;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<6/2;i++)
    {
        temp=a[i];
        a[i]=a[6-i-1];
        a[6-i-1]=temp;
    }
    cout<<"Array after swapping are";
    for(i=0;i<6;i++)
    {
        cout<<"\n"<<a[i];
    }
    return 0;
}

