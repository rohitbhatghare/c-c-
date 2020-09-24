#include<iostream>
using namespace std;
static int a;
class one
{

public:

   static void st1()
    {
         a++;


    }

        void dis()
        {
            cout<<a<<endl;
        }

};

int main()
{
    one ob1,ob2,ob3;
    ob1.dis();
    ob2.dis();
    ob3.dis();
    ob3.st1();
    ob1.dis();
    ob2.dis();
    ob3.dis();

    return 0;
}
