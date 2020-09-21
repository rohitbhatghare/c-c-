#include<iostream>
using namespace std;

class area
{
    public:
    int n,rev,rem;

    void get(int n)
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
    ob1.get(12345);
    ob1.dis();

    return 0;
}
