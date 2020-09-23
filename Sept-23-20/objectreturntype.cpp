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
    one add(one cob2)
    {
        one tob;
        tob.a=a+cob2.a;
        tob.b=b+cob2.b;
       return tob;
           }
           void dis()
           {
               cout<<a<<b;
           }
};

int main()
{
    one ob1,ob2,ob3;
    ob1.sec();
    ob2.sec();
    ob1.dis();
    ob1.add(ob2);
    ob1.dis();
    ob3=ob1.add(ob2);
    ob3.dis();


    return 0;
}
