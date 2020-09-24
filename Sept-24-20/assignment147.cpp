#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n;

    cout<<"\n Enter the  No of month : ";
    cin>>n;
    switch(n)
    {
        case 12:
        cout<<"\n 31 days ";
        break;
        case 11:
        cout<<"\n 31 days ";
        break;
        case 10:
        cout<<"\n 30 days ";
        break;
        case 9:
        cout<<"\n 31 days ";
        break;
        case 8:
        cout<<"\n 30 days ";
        break;
    case 7:
        cout<<"\n 31 days ";
        break;
    case 6:
        cout<<"\n 30 days ";
        break;
    case 5:
        cout<<"\n 31 days ";
        break;
    case 4:
        cout<<"\n 30 days ";
        break;
    case 3:
        cout<<"\n 31 days ";
        break;
        case 2:
        cout<<"\n 28 days ";
        break;
        case 1:
        cout<<"\n 31 days ";
        break;


        default :
        cout<<"\n INVALID INPUT ";
        break;
    }
    cout<<"\n\n";
    return 0;
}
