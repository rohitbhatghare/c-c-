#include<iostream>
#include<conio.h>
using namespace std;

int product(int a,int b)
{
    static int c=0;
    c=c+1;
    return a*b+c;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    cout<<"The multiplication of a and b is"<<product(a,b)<<endl;
 return 0;
}
