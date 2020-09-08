#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 float  a,b,c;
    int per;
    cout<<"\n Enter one side of triangle ";
    cin>>a;
    cout<<"\n Enter second side of triangle ";
    cin>>b;
    cout<<"\n Enter third side of triangle ";
    cin>>c;
    if((a<(b+c)) && b<(c+a) && c<(b+a))
    {
        per=a+b+c;
        cout<<"Triangle is possible"<<endl;
        cout<<"perimeter of triangle is"<<endl<<per;
    }
    else
    {
        cout<<"Triangle is not possible";

    }

    return 0;
}
