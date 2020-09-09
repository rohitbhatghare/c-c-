#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int st[80],i;
    float m,tot=0,avg;
    cout<<"Enter the marks of students"<<endl;
    for(i=0; ;i++)
    {

    cin>>st[i];
    if(st[i]<=0)
    {
        break;
    }
    m++;
    tot=st[i]+tot;
    }

    avg=tot/m;
cout<<"Average marks of student are"<<endl<<avg;
return 0;
}
