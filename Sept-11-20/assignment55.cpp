#include<iostream>
using namespace std;
int main()
{

int x,y;

cout<<"enter the first integer:\n"<<endl;
cin>>x;
cout<<"Enter the second integer:\n";
cin>>y;

if(x%y == 0)
    cout<<x<<" is a multiple of \n"<<y;
else
    cout<<x<<"%d is not a multiple of \n"<<y;
return 0;

}
