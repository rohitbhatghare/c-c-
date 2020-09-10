#include<iostream>
#include<conio.h>
int fibo(int n);
using namespace std;

int main()
{

int n,f;
cout<<"Enter the number \n";
cin>>n;
f= fibo(n);
cout<<f<<"\n";
}

int fibo(int n)
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
        return fibo(n-1)+fibo(n-2);
    }
}
