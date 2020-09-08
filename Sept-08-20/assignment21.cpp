#include<iostream>
#include<conio.h>
using namespace std;


void asds(int a,int b,int c,int d)
{


    int asds ;
    if((a>c)&&(a>d)&&(b>c)&&(b>d))
    {
        cout<<"The pairs of numbers are in Ascending order"<<endl;
    }
    else
    {
        cout<<"The pairs Of Numbers are in Dscending Order"<<endl;
    }
}


int main()
    {
        int a,b,c,d;
    cout<<"\n Enter first pair numbers "<<endl;
    cout<<"a="<<endl;
    cin>>a;
    cout<<endl;
   cout<< "b="<<endl;
    cin>>b;
    cout<<"\n Enter second pairs numbers "<<endl;
    cout<<"c="<<endl;
    cin>>c;
    cout<<endl;
    cout<<"d="<<endl;
    cin>>d;
    asds(a,b,c,d);
    return 0;
    }
