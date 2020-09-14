#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x;

    cout<<"(x)"<<"\t"<<"(x+2)"<<"\t"<<"(x+4)"<<"\t"<<"(x+6)"<<"\n\n";
    cout<<"---------------------------\n";
    for(x=1; x<=15; x=x+3)
        cout<<x<<"\t"<<(x+2)<<"\t"<<(x+4)<<"\t"<<(x+6)<<"\n";
    return 0;
}
