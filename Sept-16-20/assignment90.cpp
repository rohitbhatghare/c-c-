#include <iostream>
#include <string>

using namespace std; 	//introduces namespace std
int main()
{
int a,b,c;
    cout<<"Enter the First  integer"<<endl;
    cin>>a;
    cout<<"Enter the Second integer"<<endl;
    cin>>b;
    cout<<"Enter the Third integer"<<endl;
    cin>>c;

    if( (b - a == c - b) || (c - a == b - c) || (a - b == c - a))
    {
        cout<<"True";

    }
    else
    {
        cout<<"False";
    }
    return 0;
}

