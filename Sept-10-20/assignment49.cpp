#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int n, count;
float x, y=1;

cout<<"Enter the value of x \n"<<endl;
cin>>x;
cout<<"Enter the value of x \n"<<endl;
cin>>y;

if(n==0)
    {
y = 1;
}
else
    {
for(count=1; count<=n; count++)
{
y = y*x;
}
}
cout<<"x ^ n is :"<< y;
return 0;

}
