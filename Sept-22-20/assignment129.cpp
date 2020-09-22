#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age of candiate \n";
    cin>>age;

    if(age==18)
    {
        cout<<"Eligible for Voting";
    }
    else if(age>=18)
    {
        cout<<"Eligible for Voting";
    }
    else
       cout<< " NOT Eligible for Voting";
    return 0;
}
