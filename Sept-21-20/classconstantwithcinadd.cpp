#include<iostream>
using namespace std;

class add
{
    public:
    int a,b,c;

void get()
{
cout<<"Enter the first value \n";
cin>>a;
cout<<"Enter the second value \n";
cin>>b;
}
void  sum()
{
    c=a+b;
}
void dis()
{
    cout<<"The sum is "<<c;
}

};
int main()
{

add ob1;
ob1.get();
ob1.sum();
ob1.dis();

return 0;
}


