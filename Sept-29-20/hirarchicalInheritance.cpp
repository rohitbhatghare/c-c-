#include<iostream>
using namespace std;

class one
{
public :
    int a;
     void see1()
    {
        a=12;


    }
    void dis1()
    {

        cout<<a;
    }

};

class two:public one
{
    public:
    int b;
     void see2()
    {

        b=15;

    }
    void dis2()
    {

        cout<<b<<endl;
    }
};

class three:public one
{
public:
    int c;

    void see3()
    {
      c=14;
    }
    void dis3()
    {

        cout<<c<<endl;
    }
};

int main()
{
   three o3;
   o3.see1();
   o3.dis1();
   o3.see3();
   o3.dis3();
   two o2;
   o2.see1();
   o2.dis1();
   o2.see2();
   o2.dis2();




   return 0 ;
}

