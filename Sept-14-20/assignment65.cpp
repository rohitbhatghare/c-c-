#include <iostream>
#include <string>

using namespace std; 	//introduces namespace std
int main()
{
    float a,b,c,res;
cout<<"Enter The First Number \n";
cin>>a;
cout<<"Enter The First Number \n";
cin>>b;
if(a==b)
{
   c=a+b;
    res=3*c;

cout<<"The Triple Of Two Same Numbers Are \n"<<res;
}
else
cout<<"The Triple is not Possible";

return 0;
}
