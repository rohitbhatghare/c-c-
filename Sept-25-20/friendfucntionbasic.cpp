#include<iostream>
using namespace std;

class one
{
    int a=2,b=3,c=0;
 private:
     friend void fun(one& x,one& y,one& z)
     {
         z.c=x.a+y.b;
         cout<<x.c;
     }
};

int main()
{
    one o1,o2,o3;
    fun(o1,o2,o3);

    return 0;
}
