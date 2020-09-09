#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[5],i;
    cout<<"Enter the five elements of array"<<i;
    for(i=0;i<=4;i++)
    {
      cin>>a[i];
    }
    for(i=0;i<=4;i++)
    {
        if(a[i]<5)
        {
            cout<<"\t"<<i<<"\t"<<a[i];
        }
    }
        cout<<"All elements greater than 5";



    return 0;
    }

