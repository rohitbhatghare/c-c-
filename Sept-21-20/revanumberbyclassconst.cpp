#include<iostream>
using namespace std;

class area
{
    public:
    int n=123456,rev=0,rem;

    void get()
    {
        while(n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
    }
    void dis()
    {
        cout<<rev<<"  : Is the reverse number";
    }
};

int main()
{
    area ob1;
    ob1.get();
    ob1.dis();

    return 0;
}
