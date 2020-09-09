#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[5],i,ele;
    cout<<"enter the 5 elements of array"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>ele;
        if(ele>0)

        a[i]=ele;
        else
        {
            a[i]=100;
        }
    }
    cout<<"Array values are"<<endl;
    for(i=0;i<5;i++)
    {

        cout<<"n ["<<i<<"]"<<a[i];

        }
return 0;
}
