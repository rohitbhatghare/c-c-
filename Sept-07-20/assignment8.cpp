#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,res;
    cout<<"Enter the Value of first number :"<<endl;
    cin>>a;
    cout<<"Enter the Value of Second number :"<<endl;
    cin>>b;
    cout<<"Enter the Value of third number :"<<endl;
    cin>>c;
    res=(b*b)-(4*(a*c));
    if((res>0) && (a!=0))
    {
        double x,y,res;
        res = sqrt(res);
		x = (-b + res)/(2*a);
		y = (-b - res)/(2*a);
		cout<<"Roots are:"<<endl;
		cout<<"Root 1 :"<<x<<endl;
		cout<<"Root 2 :"<<y<<endl;

    }
    else
        {
            cout<<"Unable to find roots"<<endl;
        }
        return 0;
}
