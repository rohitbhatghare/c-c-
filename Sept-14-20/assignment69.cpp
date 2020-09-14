#include <iostream>
#include <string>

using namespace std; 	//introduces namespace std
int main()
{
    int a;
    cout<<"Enter the Number \n";
    cin>>a;
    if (a%3==0)
        {

      cout<<"The Number is Multiple of 3 \n";
    }
    if(a%7==0)
    {
            cout<<"The Number is Multiple of 7 \n";
    }

    return 0;
}
