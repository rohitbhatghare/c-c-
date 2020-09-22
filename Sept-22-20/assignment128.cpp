#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"Enter the Year \n";
    cin>>y;
    if(y%400==0)
    {
        cout<<"Is a leap year \n";
    }
    else if(y%100==0)
    {
        cout<<"Is not a leap year";
    }
    else if(y%4==0)
    {
        cout<<"Is a leap year \n";
    }
    else
    {
       cout<<"Is not a leap year";
    }
    return 0;
}
