#include<iostream>
using namespace std;

class array
{
public:
    int a[50],i;

    int arr()
    {
        for(i=0;i<=3;i++)
        {
            cin>>a[i];
        }
    }
    int dis()
    {
        cout<<"\n array is :";
        for(i=0;i<=3;i++)
        {
            cout<<a[i];
        }
    }
};

int  main()
{
    array e1;
    e1.arr();
    e1.dis();

    return 0;
}
