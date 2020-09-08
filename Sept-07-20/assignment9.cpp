#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int p,q,r,s;
    cout<<"\n Enter first number : ";
    cin>>p;
    cout<<"\n Enter second number : ";
    cin>>q;
    cout<<"\n Enter third number : ";
    cin>>r;
    cout<<"\n Enter fourth number : ";
    cin>>s;

    if((p>r) && (r>s) && (r+s) >(p+q)&&(p>0)&&(q>0)&&(p%2==0))
    {

        cout<<"\n Correct values"<<endl;
    }
    else{
        cout<<"\n Incorrect values"<<endl;
    }
    return 0;
}
