#include<iostream>
using namespace std;
float series()
{
    float i,j=1,t,l;
    for(i=0;i<=7;i+=2)
    {
        t=(i/j);
        l=l+t;
        j=j*2;
    }
    return j;
}

int main()
{
    float a=series();
    cout<<"The calculation of \n S = 1 + 3/2 + 5/4 + 7/8 is \n"<<a;
}
