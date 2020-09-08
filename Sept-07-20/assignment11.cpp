#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"\n Enter the integer ";
    cin>>n;

    if((n>=0) && (n<=20) )
    {

        cout<<"\n the number is ranges to 0 to 40 "<<endl;
    }
    else if((n>=21) && (n<=40) )
    {

        cout<<"\n the number is ranges to 41 to 60 "<<endl;
    }
    else if ((n>=41) && (n<=60) )
    {

        cout<<"\n the number is ranges to 61 to 80 "<<endl;
    }
     else if((n>=61) && (n<=80) )
    {

        cout<<"\n the number is ranges to 0 to 80 "<<endl;
    }
     else
    {

        cout<<"\n the number is out of the range "<<endl;
    }

    return 0;
}
