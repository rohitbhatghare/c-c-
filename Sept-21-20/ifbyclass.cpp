#include<iostream>
using namespace std;

class area
{
    public:
    int a,b;

    void get()
    {
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
