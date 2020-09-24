#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n;
    float area,r,b,h,l,w;

    cout<<"\n Enter the  No for area : ";
    cin>>n;
    switch(n)
    {

    case 3:
        cout<<"Input radious of the circle : ";
                 cin>>r;
                 area=3.14*r*r;
                 break;
        break;
        case 2:
         cout<<"Input the base and hight of the triangle :";
                  cin>>b>>h;
                  area=.5*b*h;
                  break;
        break;
        case 1:
        cout<<"Input length and width of the rectangle : ";
                  cin>>l>>w;
                  area=l*w;
                  break;
        break;


    }
     cout<<"\n The area is"<<n;
    cout<<"\n\n";
    return 0;
}
