#include <iostream>
#include <string>

using namespace std; 	//introduces namespace std
int main()
{
    float a,b,c;
    cout<<"Enter the 1st Integer\n";
    cin>>a;
    cout<<"Enter the 2nd Integer \n";
    cin>>b;
    int n = 100;
            a = (a - n);
             b =(b - n);

        if(a>b)
        {

      cout<<"First Integer is Nearest to 100 \n";
        }
        else
        {
            cout<<"Second Integer is Nearest to 100";
        }



    return 0;
}
