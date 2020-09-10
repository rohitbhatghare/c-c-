#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the Two Numbers \n";
    cin>>num1>>num2;
    cout<<"The Two numbers are \n"<<num1<<"\n"<<num2<<endl;

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"Swapped Numbers are \n";
    cout<<"First Number \t"<<num1<<"\n"<<"Second Number \t"<<num2;
    return 0;
}
