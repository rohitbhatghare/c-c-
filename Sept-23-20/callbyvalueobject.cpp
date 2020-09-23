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
    void add()
    {
        int c= a+b;
        cout<<"The sum of a and b  are"<<c;
    }
};

int main()
{
    one ob1;
    ob1.sec();
    ob1.add();

    return 0;
}
