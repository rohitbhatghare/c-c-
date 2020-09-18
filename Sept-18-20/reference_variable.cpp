#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i;
    double d;
    int& r=i;
    double& s=d;

    i=5;
    cout<<"value of variable i is"<<i<<endl;
    cout<<"value of reference varivale of i is"<<r<<endl;

    d=10;
    cout<<"value of varibale d is "<<d<<endl;
    cout<<"value of reference variable of d is"<<s<<endl;

    return 0;

}
