#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float dis,fuel;
    float avg;
    cout<<"\n Enter the  Distance in kilometers:";
    cin>>dis;
    cout<<"\n Enter the fuel consumption in litre:";
    cin>>fuel;
    avg=(dis/fuel);;
    cout<<avg ;
    return 0;
}
