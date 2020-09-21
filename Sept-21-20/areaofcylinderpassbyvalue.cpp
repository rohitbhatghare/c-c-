#include<iostream>
using namespace std;

class area
{
    public:
    int pi,r,h,a;

    void get(float pi,float r,float h)
    {
        a=pi*r*r*h;
    }
    void dis()
    {
        cout<<a<<"  : Is the area of cylinder";
    }
};

int main()
{
    area ob1;
    ob1.get(3.14,4,10);
    ob1.dis();

    return 0;
}
