#include<iostream>
using namespace std;

class construct
{
public :
    int a,b,c;
    construct()
    {
        cout<<"Enter the value of a and b";
        cin>>a>>b;
    }
};

int main()
{
    construct x;
   x.c= x.a+x.b;
    cout<<x.c;
    //return 0;
}
