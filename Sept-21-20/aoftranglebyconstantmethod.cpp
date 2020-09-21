#include<iostream>
using namespace std;

class area
{
   public :
       float a,h,r;
       float pi=3.14;

       void get()
       {
           cout<<"Enter the radius of cylinder \n";
           cin>>r;
           cout<<"Enter the height of cylinder \n";
           cin>>h;
       }
       void aa()
       {
           a=pi*r*r*h;
       }
       void res()
       {
           cout<<a<<"\t \t Is a Area of cylinder";
       }
};
int main()
{
    area ob1;
    ob1.get();
    ob1.aa();
    ob1.res();

    return 0;
}
