#include <iostream>
#include <string>

using namespace std; 	//introduces namespace std
int main()
{
int x,y,z;
    cout<<"Enter the First (X) integer"<<endl;
    cin>>x;
    cout<<"Enter the Second (Y) integer"<<endl;
    cin>>y;

    if(x==y)
    {
        return 0;
    }

    else if(((x % 7) == (y % 7)) && (x < y) || (x > y))
    {

        cout<<" x Is LARGER";

    }
    else

        cout<<"y Is LARGER";
    return 0;
}

