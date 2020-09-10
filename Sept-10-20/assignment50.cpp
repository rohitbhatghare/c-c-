#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
      long int a;
    int i;
    double c;
    cout<<"\n n    2 to power n      2 to power -n";

    a = 1;
    for(i = 0; i < 11; i++)
     {
      if(i == 0)
        a=1;
      else
        a = a * 2;
      c = 1.0 / (double) a;
      cout<<"\t"<<i<<"\t"<<a<<"\t"<<c;
    }

    return 0;
  }
