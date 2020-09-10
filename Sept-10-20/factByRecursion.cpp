#include<iostream>
#include<conio.h>
int fact(int n);
using namespace std;
int main()
{
    int n,f;
    cout<<"Enter the number which want to factorial \n";
    cin>>n;
    f=fact(n);
    cout<<"Factorial is \t :"<<f;
}

int fact(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);

    }
}
