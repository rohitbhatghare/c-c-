#include<iostream>
using namespace std;

class add
{
    public:
    int x,y,c;

void get(int x,int y)
{
    c=x+y;
}

void dis()
{
    cout<<"The sum is "<<c;
}

};
int main()
{

add ob1;
ob1.get(14,15);
ob1.dis();

return 0;
}


