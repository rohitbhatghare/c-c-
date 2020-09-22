#include<iostream>
using namespace std;

class area
{
public:
    float a,h,r;
    float pi=3.14;

    int get()
    {
       cout<<"Enter the value of radius \n";
       cin>>r;
       cout<<"Enter the value of height \n";
       cin>>h;
    }
    int cal()
    {
        return a=pi*r*r*h;
    }
};
int main()
{
    area c1;
    c1.get();
    c1.cal();
    cout<<"Volume of cylinder is "<<c1.cal();

    return 0;
}
