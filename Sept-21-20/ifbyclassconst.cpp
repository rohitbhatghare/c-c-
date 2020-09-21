#include<iostream>
using namespace std;

class area
{
    public:
    int b,a;

    void inp()
    {
        int a=12,b=43;
    }

    void get()
    {

        cout<<"Enter the first number \n";
        cin>>a;
        cout<<"Enter the second number \n";
        cin>>b;
        if(a<b)
        {

          cout<< "a is smaller than b \n";
        }
        else
        {
            cout<<"b is smaller than a \n";
        }
    }

};

int main()
{
    area ob1;
    ob1.get();
    return 0;
}
