#include<iostream>
#include<conio.h>
using namespace std;


void divide(float a,float b,float c,float x)
{


    int divide ;
    if(x!=0)
        {
            c= (a/b);
        cout<<"The division is possible"<<endl;
        cout<<c;
    }
    else
    {
        cout<<"The Division"<<endl;
    }
}


int main()
    {
        float a,b,c,x;
    cout<<"\n Enter first number "<<endl;
    cout<<"a="<<endl;
    cin>>a;
    cout<<endl;
   cout<< "b="<<endl;
    cin>>b;
    cout<<"\n Enter second numbers"<<endl;
        divide(a,b,c,x);
    return 0;
    }
