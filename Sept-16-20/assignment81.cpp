#include <iostream>
#include <string>

using namespace std; 	//introduces namespace std
int main()
{
int a,b,sum;
    cout<<"Enter the First Integer"<<endl;
    cin>>a;
    cout<<"Enter the Second Integer"<<endl;
    cin>>b;

    sum=a+b;

if(sum>=20 && sum<=30)
    {
        cout<<"The sum of number is ranging in 20...30";

    }
    else

        cout<<"The sum of Numbers are greater than 30";
    return 0;
}

