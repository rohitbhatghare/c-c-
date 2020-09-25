#include<iostream>
using namespace std;

class one
{
    int a;
 private:
     friend void fun(one& x)
     friend void fun(one& x)
     {
         int b;
         cin>>x.a>>b;
         cout<<"Sum is"<<x.a+b;
     }
};

int main()
{
    one o;
    fun(o);

    return 0;
}
