#include<iostream>
#include<conio.h>
using namespace std;

inline int product(int a,int b)
{
    return a*b;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    cout<<"The multiplication of a and b is"<<product(a,b)<<endl;
 return 0;
}
