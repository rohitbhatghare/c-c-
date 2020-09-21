#include<iostream>
using namespace std;

class area
{
   public :
       float a,h,r;
       float pi=3.14;

       void get()
       {
           r=4;

           h=9;
       }
       void aa()
       {
           a=pi*r*r*h;
       }
       void res()
       {
           cout<<a<<":\t Is a Area of cylinder";
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
