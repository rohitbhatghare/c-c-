#include<iostream>
using namespace std;

class vehicle
{
public :
    int fa,cp,brk;

     void fuel()
    {
        cout<<"Enter the required amount of fuel\n";
        cin>>fa;
    }
    void capacity()
    {
        cout<<"Enter the capacity of vehicle\n";
        cin>>cp;
    }
    void abreak()
    {
        cout<<"Enter the applied break\n";
        cin>>brk;
    }
    void disfuel()
    {

        cout<<"The amount of fuel used"<<fa<<endl;
    }
    void discapacity()
    {
        cout<<"The amount of capacity is"<<cp<<endl;
    }
    void disbreak()
    {
        cout<<"The force of break applied"<<brk<<endl;
    }

};
class bus:public vehicle
{
    public:
    int tf, uf,fcap,tfcap,tkm;

    void bfuel()
    {
   cout<<"Enter the fuel used by bus\n";
    cin>>uf;

     tf=fa+uf;

     cout<<"The amount of fuel used by bus is "<<tf<<"  In ltrs.\n";
    }

    void bcap()
    {
     cout<<"Enter full capacity of bus\n";
     cin>>fcap;

     tfcap=cp-fcap;

     cout<<"vacant seats are : "<<tfcap;
    }

    void bbrk()
    {
     cout<<"Enter the total km travelled by bus \n";
     cin>>tkm;

     if(tkm>2000)
     {
         cout<<"Break needs to change\n";
     }
     else
     {
         cout<<"Breaks can run for further days\n";
     }
    }
};
class car:public vehicle
{
    public:
    int tf1,uf1,fcap1,tfcap1,tkm1;

    void fcar()
    {

    cout<<"Enter the fuel used by car\n";
    cin>>uf1;

     tf1=fa+uf1;

     cout<<"The amount of fuel used by car is "<<tf1<<"  In ltrs.\n";
    }

      void ccar()
        {
     cout<<"Enter full capacity of car\n";
     cout<<fcap1;

     tfcap1=cp-fcap1;

     cout<<"vacant seats are : "<<tfcap1;
        }

        void cbrk()
        {

     cout<<"Enter the total km travelled by car \n";
     cin>>tkm1;

     if(tkm1>2000)
     {
         cout<<"Break needs to change\n";
     }
     else
     {
         cout<<"Breaks can run for further days\n";
     }
        }
};

class truck:public vehicle
{
    public:
    int tf2,uf2,fcap2,tfcap2,tkm2;

    void ftruck()
    {
    cout<<"Enter the fuel used by truck\n";
    cin>>uf2;

     tf2=fa+uf2;

     cout<<"The amount of fuel used by truck is "<<tf2<<"  In ltrs.\n";
    }

    void tcap()
    {

     cout<<"Enter full capacity of truck\n";
     cout<<fcap2;

     tfcap2=cp-fcap2;

     cout<<"vacant seats are : "<<tfcap2;
    }
    void tbrk()
    {

     cout<<"Enter the total km travelled by truck \n";
     cin>>tkm2;

     if(tkm2>2000)
     {
         cout<<"Break needs to change\n";
     }
     else
     {
         cout<<"Breaks can run for further days\n";
     }
    }
};

int main()
{
   bus b1;
   cout<<"Details of bus"<<endl;
   b1.bfuel();
   b1.bcap();
   b1.bbrk();


   car c1;
   cout<<"Details of car"<<endl;
   c1.fcar();
   c1.ccar();
   c1.cbrk();

   truck t1;
   cout<<"Details of truck"<<endl;
   t1.ftruck();
   t1.tcap();
   t1.tbrk();




   return 0 ;
}

