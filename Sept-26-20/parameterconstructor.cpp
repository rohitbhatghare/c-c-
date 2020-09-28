#include<iostream>
using namespace std;

class one
{
    public :
    int a;
    int b;

    one(int x,int y)
    {
        a=x;
        b=y;
    }

};
int main()
{
    one o1(3,4);
    one o2(5,9);
    cout<<"Multiplication of a1 and b1 is"<<o1.a*o1.b<<endl;
    cout<<"Multiplication of a2 and b2 is"<<o2.a*o2.b<<endl;
    return 0;

}
