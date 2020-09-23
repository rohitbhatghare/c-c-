#include<iostream>
using namespace std;

class one
{
public:
    int a,b;
    void sec()
    {
    a=2;
    b=3;
    }
    void add(one cob1)
    {
        cob1.a=12;
        cob1.b=18;
           }
           void dis()
           {
               cout<<a<<b;
           }
};

int main()
{
    one ob1;
    ob1.sec();
    ob1.dis();
    ob1.add(ob1);
    ob1.dis();

    return 0;
}
