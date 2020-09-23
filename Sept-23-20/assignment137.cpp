#include<iostream>
using namespace std;

int main()
{
    int s1, s2, s3;
    cout<<"Input three sides of triangle: \n";
    cin>>s1>>s2>>s3;

    if(s1==s2 && s2==s3)
    {
        cout<<"This is an equilateral triangle.\n";
    }
    else if(s1==s2 || s1==s3 || s2==s3)
    {
        cout<<"This is an isosceles triangle.\n";
    }
    else
    {
        cout<<"This is a scalene triangle.\n";
    }

    return 0;
}
