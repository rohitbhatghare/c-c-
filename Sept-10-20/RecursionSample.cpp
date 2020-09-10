#include<iostream>
#include<conio.h>
void fun(int i);
using namespace std;

int main()
{
    fun(1);
    return 0;
}
void fun(int i)

{

    if(i==10)
{


    return;
}
        cout<<i<<"\n";

       fun(i+1);
       cout<<i<<"\n";


}
