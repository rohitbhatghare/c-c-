#include<iostream>
using namespace std;

class one
{
public:
    int a,b;

    void sec()
    {
        cout<<"Enter a \n";
        cin>>a;

        cout<<"Enter b \n";
        cin>>b;

    }
    void add(one cob1)
    {
        int c= a+cob1.a;
        int d=b+cob1.b;
        cout<<"The sum of a is"<<c<< "and b  is"<<d;

    }
};

int main()
{
    one ob1,ob2;
    ob1.sec();
    ob2.sec();
    ob2.add(ob1);

    return 0;
}
