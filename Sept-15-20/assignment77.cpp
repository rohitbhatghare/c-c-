#include <iostream>
using namespace std; 	//introduces namespace std
int main()
{
    int a,b;
    cout<<"Enter the 1st Positive Integer\n";
    cin>>a;
    cout<<"Enter the 2nd Positive Integer \n";
    cin>>b;


        if ((a % 10)== (b % 10))
            {

      cout<<"The last digits are same \n";
        }
         else
        {
             cout<<"The last digits are not same  \n";
        }




    return 0;
}
