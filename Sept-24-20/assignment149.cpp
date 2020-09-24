#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n;
    float a,b,c;

    cout<<"\n Enter the  No for calculation  : ";
    cin>>n;
    switch(n)
    {

    case 3:
        cout<<"Input a and b for sum: ";
                 cin>>a>>b;
                 c=a+b;
                 break;
        break;
        case 2:
         cout<<"Input a and b for substraction:";
                  cin>>a>>b;
                  c=a-b;
                  break;
        break;
        case 1:
        cout<<"Input a and b for multiplication : ";
                  c=a*b;
                  break;
        break;


    }
     cout<<"\n The calculation is"<<n;
    cout<<"\n\n";
    return 0;
}
