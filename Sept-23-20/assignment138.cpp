#include<iostream>
using namespace std;

int main()
{

 int a, b, c, sum;

    cout<<"Input three angles of triangle :\n ";
    cin>>a>>b>>c;


    sum = a + b + c;


    if(sum == 180)
    {
        cout<<"True.\n";
    }
    else
    {
        cout<<"The triangle is not valid.\n";
    }
 return 0;
 }
