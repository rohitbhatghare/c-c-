#include <iostream>
#include <string>
#include<math.h>
using namespace std;
int main()
{

    float a;
    cout<<"Input a Number \n";
    cin>>a;

        {
           if(abs(a - 100) <= 10 || abs(a - 200) <= 10)

              cout<<"TRUE \n";

        else
            cout<<"FALSE";
        }

            return 0;
        }
