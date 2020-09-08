#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int month;
    cout<<"\n Enter month 1 to 12 of year ";
    cin>>month;
    switch(month)
    {
    case 1:
        cout<<"January"<<endl;
        break;
    case 2:
        cout<<"February"<<endl;
        break;
    case 3:
        cout<<"march"<<endl;
        break;
    case 4:
        cout<<"april"<<endl;
        break;
    case 5:
        cout<<"may"<<endl;
        break;
    case 6:
        cout<<"june"<<endl;
        break;
    case 7:
        cout<<"july"<<endl;
        break;
    case 8:
        cout<<"august"<<endl;
        break;
    case 9:
        cout<<"september"<<endl;
        break;
    case 10:
        cout<<"october"<<endl;
        break;
    case 11:
        cout<<"November"<<endl;
        break;
    case 12:
        cout<<"December"<<endl;
        break;
    default:
        cout<<"Enter number between 1 to 12";
    }
    return 0;
}
