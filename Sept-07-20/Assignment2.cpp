#include<iostream>
using namespace std;
int main()
{
    char id[90];
    int sal,tme,tym,money,total;
    cout<<"Enter the id of the employ"<<endl;
    cin>>id;
    cout<<"Enter the working hrs of employ"<<endl;
    cin>>tym;
    cout<<"Enter the salary of one hour"<<endl;
    cin<<money;
    sal= tym * money;
    cout<<"salary of employ for one day is:">>sal<<endl;
    total=sal*30
    cout<<"Total month salary is:"<<total;


    return 0;
}

