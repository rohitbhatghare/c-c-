#include<iostream>
using namespace std;

class one
{
public :
    int a;

};

class two:public one
{
    public:
    int b;
};

class three:public two
{
public:
    int c;

    void see()
    {
        a=12;
        b=15;

    }
    void dis()
    {
        c=a+b;
        cout<<c;
    }
};

int main()
{
   three o1;
   o1.see();
   o1.dis();


   return 0 ;
}

