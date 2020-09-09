#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int p,r,n,money;
cout<<"Input principle \n";
cin>>p;
cout<<" Rate of interest \n";
cin>>r;
cout<<"Time";
cin>>n;
money=(p*r*n)/100;
cout<<"Simple interest "<<money;
return 0;
}
