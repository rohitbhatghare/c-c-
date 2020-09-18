#include<iostream>
#include<conio.h>
using namespace std;

int vol(int a,int b,int c)
{
    return(a*b*c);
}
int vol(float r,float h)
{
    float pi=3.14;
    return (pi*r*r*h);
}
int vol(int a)
{
    return(a*a*a);
}

int main()
{

    cout<<"The volume of cubiod is 3,7 and 8 \t"<<vol(3,6,8)<<endl;
   cout<<"The volume of cylinder radius 3 and height is 8 \t"<<vol(3,8)<<endl;
   cout<<"The volume of cube of side is 3"<<vol(3)<<endl;
 return 0;
}
