#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char n;

    cout<<"\n Enter the  No of day : ";
    cin>>n;
    switch(n)
    {
    case '7':
        cout<<"\n Sunday ";
        break;
    case '6':
        cout<<"\n Saturday ";
        break;
    case '5':
        cout<<"\n Friday ";
        break;
    case '4':
        cout<<"\n Thursday ";
        break;
    case '3':
        cout<<"\n Wednesday ";
        break;
        case '2':
        cout<<"\n Tuesday ";
        break;
        case '1':
        cout<<"\n Monday ";
        break;
    default :
        cout<<"\n INVALID INPUT ";
        break;
    }
    cout<<"\n\n";
    return 0;
}
