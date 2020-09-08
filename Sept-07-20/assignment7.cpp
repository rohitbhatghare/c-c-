#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int sec,hr,mins,s;
    cout<<"Enter the seconds :"<<endl;
    cin>>sec;
    hr=(sec/3600);
    cout<<"Hours are :"<<hr<<endl;
    mins=(sec-(3600*hr))/60;
    cout<<"Mins are :"<<mins<<endl;
    s=(sec-(3600*hr)-(mins*60));
    cout<<"Seconds are :"<<s<<endl;
    return 0;
}
