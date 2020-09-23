#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int a,b,c,d;
float x,y;

cout<<"Input the value of a,b & c : ";

cin>>a>>b>>c;

 d=b*b-4*a*c;

if(d==0)
{
cout<<"Both roots are equal.\n";
x=-b/(2.0*a);
y=x;

cout<<"First Root Root1= \n"<<x;

cout<<"Second Root Root2= \n"<<y;
}
else if(d>0)
{
cout<<"Both roots are real and diff-2\n";

        x=(-b+sqrt(d))/(2*a);
        y=(-b-sqrt(d))/(2*a);

cout<<"First Root Root1= \n"<<x;

cout<<"Second Root root2= \n"<<y;
}
else
cout<<"Root are imaginary;\nNo Solution. \n";
return 0;
}
