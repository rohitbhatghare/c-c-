#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n;

    cout<<"\n Enter the  Number : ";
    cin>>n;
    switch(n)
    {
        case 10:
        cout<<"\n Ten ";
        break;
        case 9:
        cout<<"\n Nine ";
        break;
        case 8:
        cout<<"\n Eight ";
        break;
        case 7:
        cout<<"\n Seven ";
        break;
        case 6:
        cout<<"\n Six ";
        break;
        case 5:
        cout<<"\n Five ";
        break;
        case 4:
        cout<<"\n Four ";
        break;
        case 3:
        cout<<"\n Three";
        break;
        case 2:
        cout<<"\n Two ";
        break;
        case 1:
        cout<<"\n One ";
        break;
    default :
        cout<<"\n INVALID INPUT ";
        break;
    }
    cout<<"\n\n";
    return 0;
}
