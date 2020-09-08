#include<iostream>
#include<conio.h>
using namespace std;
void mul()
{
 int a,b;
    cout<<"\n Enter first integer ";
    cin>>a;
    cout<<"\n Enter second integer ";
    cin>>b;
    if(b%a==0)
    {

        cout<<"it can be multiplied";
    }
    else
    {

        cout<<"it cant be multiplied";
    }

}
    int main()
    {

    mul();
    return 0;
    }

