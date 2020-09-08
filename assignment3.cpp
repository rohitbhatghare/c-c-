#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\n Enter 1st number:";
    cin>>a;
    cout<<"\n Enter 2nd number:";
    cin>>b;
    cout<<"\n Enter 3rd number:";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"Maximum Number Is : "<<endl<<a;
    }
    else if(b>c)
    {
        cout<<"\n Maximum Number Is : "<<endl<<b;
    }
    else
    {
        cout<<"\n Maximum Number Is : "<<c;
    }
    cout<<endl;
    return 0;
}
