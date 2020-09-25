#include<iostream>
using namespace std;

class com
{
    int a,b;
 public:
    void setd(int a1,int a2)
     {
         a=a1;
         b=a2;
     }

     friend com sumdata(com o1,com o2);
     void dis()
     {
         cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
     }

};
com sumdata(com o1,com o2){
    com o3;

    o3.setd((o1.a+o2.a),(o1.b+o2.b));
    return o3;

}

int main()
{
    com o1,o2,sum;
    o1.setd(2,4);
    o1.dis();
    o2.setd(4,5);
    o2.dis();
    sum=sumdata(o1,o2);
    sum.dis();
    cout<<"\n\n";

    return 0;
}
