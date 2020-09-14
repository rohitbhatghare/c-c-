#include <iostream>
#include <string>

using namespace std; 	//introduces namespace std
int main()
{
    float a,b;
    cout<<"Enter the 1st Temparature \n";
    cin>>a;
    cout<<"Enter the 2nd Temparature \n";
    cin>>b;
    if ((a<0) && (b>100))
        {

      cout<<"The temparature a lesser than b \n";
    }
    if((b<0) && (a>100))
    {
            cout<<"The temparature b lesser than a \n";
    }

    return 0;
}
