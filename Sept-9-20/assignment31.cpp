#include<iostream>
using namespace std;
float number()
{
    float sum=0;
    int i;
    for(i=1;i<=50;i++)
    {
        sum=(float)1/i+sum;
    }
    return sum;
}

int main()
{
float n=number();
cout<<"The series of S is :"<<n;
return 0;
}
