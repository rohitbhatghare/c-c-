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

    if ((a >= 40 && a <= 50) || (b >= 40 && b <= 50))
            {

      cout<<"The Numbers Are In 40..50 Range \n";
        }
        else if (a==b <= 60)
            {
             cout<<"Both Numbers are in 50..60 Range  \n";
        }
         else
        {
             cout<<"Both Numbers are Less than 40..50 Range  \n";
        }




    return 0;
}
