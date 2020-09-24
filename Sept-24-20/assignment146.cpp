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
        cout<<"\n December ";
        break;
        case 11:
        cout<<"\n November ";
        break;
        case 10:
        cout<<"\n October ";
        break;
        case 9:
        cout<<"\n September ";
        break;
        case 8:
        cout<<"\n Augst ";
        break;
    case 7:
        cout<<"\n july ";
        break;
    case 6:
        cout<<"\n june ";
        break;
    case 5:
        cout<<"\n may ";
        break;
    case 4:
        cout<<"\n april ";
        break;
    case 3:
        cout<<"\n march ";
        break;
        case 2:
        cout<<"\n february ";
        break;
        case 1:
        cout<<"\n janaury ";
        break;


        default :
        cout<<"\n INVALID INPUT ";
        break;
    }
    cout<<"\n\n";
    return 0;
}
