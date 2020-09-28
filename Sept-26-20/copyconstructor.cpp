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
    one(const one &obj)
    {
        a=obj.a;
        b=obj.b;


    }

};
int main()
{
    one obj1(3,4);
    one obj2=obj1;
    cout<<obj1.a*obj1.b<<endl;
    cout<<obj2.a*obj2.b<<endl;
    return 0;

}
