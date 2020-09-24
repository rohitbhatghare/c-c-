#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int id,u; char n[25];
    int charge;

    cout<<"Enter the Name of customer \n";
    cin>>n;

    cout<<"Enter the id of customer\n";
    cin>>id;

    cout<<"Enter the unit of customer\n";
    cin>>u;

    if(u<200)
    {
        charge= 1.20;
    }
    else if(u>=200 && u<400)
    {
        charge =1.50;
    }
    else if(u>=400 && u<600)
    {
        charge=1.80;
    }
    else
    {
        charge =2.00;
    }
    double tot,sur,gtot;

    tot=u*charge;
    if(tot>300)
        sur=tot*15/100;

        gtot=tot+sur;

        if(gtot<100)
        gtot=100;

        cout<<"\t\t\t\n\n\n\nELECTRICTY BILL\n\n\n";
        cout<<"Customer name\t "<<n<<endl;;
        cout<<"Customer id\t "<<id<<endl;;
        cout<<"unit consumed "<<u<<endl;
        cout<<"Amount charge Rs. \t"<<charge<<"per unit is "<<tot<<endl;
        cout<<"Surcharge amout "<<sur<<endl;
        cout<<"Net amount to be paid "<<gtot<<endl;


        return 0;
}



