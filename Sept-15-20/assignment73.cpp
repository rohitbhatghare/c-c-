#include <iostream>
#include <string>

using namespace std; 	//introduces namespace std
int main()
{
    float a,b;
    cout<<"Enter the 1st Integer\n";
    cin>>a;
    cout<<"Enter the 2nd Integer \n";
    cin>>b;

    if ((a >= 20 && a <= 50) || (b >= 20 && b <= 50))
        {

      cout<<"True \n";
        }
        else{
             cout<<"False \n";
        }


    return 0;
}
