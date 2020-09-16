#include <iostream>
#include <string>

using namespace std; 	//introduces namespace std
int main()
{
int a,b,sum;
    cout<<"Enter the Integer"<<endl;
    cin>>a;



if((a % 10<=2) || (a % 10>=8))
    {
        cout<<"True";

    }
    else

        cout<<"False";
    return 0;
}

