#include<iostream>
using namespace std;
int main()
{
  int p,c,m,t,mp;


  cout<<"Enter the marks obtained in Physics :\t";
   cin>>p;
   cout<<"Input the marks obtained in Chemistry :\t";
   cin>>c;
    cout<<"Input the marks obtained in Mathematics :\t";
   cin>>m;
   cout<<"Total marks of Maths, Physics and Chemistry : \n"<<m+p+c;
   cout<<"Total marks of Maths and  Physics : \n"<<m+p;

                if (m>=65)
                if(p>=55)
                if(c>=50)
                if((m+p+c)>=180||(m+p)>=140)
                    cout<<"The  candidate is eligible for admission.\n";
	        else
                    cout<<"The candidate is not eligible.\n";
            else
                    cout<<"The candidate is not eligible.\n";
            else
                    cout<<"The candidate is not eligible.\n";
            else
                    cout<<"The candidate is not eligible.\n";

return 0;
}
