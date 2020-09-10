#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b=0,out,range;
    cout<<"Enter the Number which is less than 500 \n";
    cin>>a;
    range=a;
    if ( range < 1 || range > 500)
    {
        cout<<"The Number is in range \n";
        b= b + range % 10;
        b=b/10;
        b= b + range % 10;
        b=b/10;
        b= b + range % 10;
        cout<<"The sum of the Digits are \t:"<<b;
    }

    else
    {



        cout<<"The Number is Not in range \n";
    }
    return 0;
}
