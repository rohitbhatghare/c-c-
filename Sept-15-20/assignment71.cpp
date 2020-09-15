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
    if ((a<=100) && (b>=100))
        {

      cout<<"The  a is in range of 100 and  b is in range of 200 \n";
    }
    if((b<=100) && (a>=200))
    {
            cout<<"The  b is in range of 100 and  a is in range of 200 \n";
    }

    return 0;
}
