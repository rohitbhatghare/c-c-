#include <iostream>
#include <string>

using namespace std; 	//introduces namespace std
int main()
{
int x,y,z;
    cout<<"Enter the First integer"<<endl;
    cin>>x;
    cout<<"Enter the Second integer"<<endl;
    cin>>y;
    cout<<"Enter the Third integer"<<endl;
    cin>>z;

    if(((x - y) >= 20) || ((x - z) >= 20) || ((y - z) >= 20))
    {

        cout<<"Possible";

    }
    else

        cout<<"Not Possible";
    return 0;
}

