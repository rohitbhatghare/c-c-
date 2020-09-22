#include <iostream>
using namespace std;

class record
{
    public:
    char name[30];
    char id[5];
    void addrecord();
    void display();

};
    void record :: addrecord()
    {
        cout<<"\n Enter First Name of Employee: ";
        cin>>name;
        cout<<"\n Enter Employee ID [max 4 digits]: ";
        cin>>id;
    }

    void record :: display()
    {
        cout<<"\n Your Name : "<<name;
        cout<<"\n ID : "<<id;
    }


int main()
{
    record r[5];
    int i;
    for(i=0;i<5;i++)
    {
        r[i].addrecord();
    }
    for(i=0;i<5;i++)
    {
        r[i].display();
    }
    return 0;
}
