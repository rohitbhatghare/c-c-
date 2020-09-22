#include<iostream>
using namespace std;

int main()
{
   int a,b,c,x,y,z;
   double res;
   cout<<"Enter the first Number\n";
   cin>>x;
   cout<<"Enter the secomd Number\n";
   cin>>y;
   cout<<"Enter the first Number\n";
   cin>>z;

   a=(x+y)*z;
   b=(x*y)+(y*z);

   cout<<"(x+y)*z: \t:"<<a<<endl;
   cout<<"(x*y)+(y*z) \t:"<<b;

   return 0;
}
