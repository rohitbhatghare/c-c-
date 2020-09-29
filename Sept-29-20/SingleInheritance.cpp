#include<iostream>
using namespace std;

class one
{
    public:
    int a;
};

class two:public one
{
public:
    int b;

    void see()
    {

    a=12;
    b=17;
    }
    void dis()
    {
         cout<<a+b;
    }
};

int main()
{
    two o1;
    o1.see();
    o1.dis();
    return 0;
}
