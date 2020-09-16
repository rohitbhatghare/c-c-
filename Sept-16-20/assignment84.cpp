#include <iostream>
#include <string>

using namespace std; 	//introduces namespace std
int main()
{
int a,b,sum;
    cout<<"Enter the Integer"<<endl;
    cin>>a;



if((a % 3==0) ^ (a % 7==0))
    {
        cout<<"True";

    }
    else

        cout<<"False";
    return 0;
}

