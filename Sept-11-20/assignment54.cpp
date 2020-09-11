#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    int n, a;
cout<<"input a number: \n\n";
cin>>a;

if(a>0)
    {
    n = a;
}
else
{

    n = -a;
}

cout<<"\n original value = "<<a<<endl;
cout<<"\n\n";
cout<<"absolute value = "<<n;
cout<<"\n\n";
return 0;
}
