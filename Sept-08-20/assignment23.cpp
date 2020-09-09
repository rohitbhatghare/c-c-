#include<iostream>
#include<conio.h>
using namespace std;


int main(int x,int y)
{
 int x,y;
    cout<<"\n Enter Value of "<<endl;
    cout<<"x="<<endl;
    cin>>x;
    cout<<endl;
    cout<<"\n Enter Value of "<<endl;
   cout<< "y="<<endl;
    cin>>y;

        if((x>0)&&(y>0))
    {
        cout<<"The input belongs to Quadrant-1 :"<<endl;
        cout<<"(where all values are in positive manner)"<<endl;
    }
    else if((x<0)&&(y>0))
    {
        cout<<"The input belongs to Quadrant-2 :"<<endl;
        cout<<"(where X is Negative and Y is positive manner)"<<endl;
    }
  else  if((x<0)&&(y<0))
    {
        cout<<"The input belongs to Quadrant-3 :"<<endl;
        cout<<"(where all values are in negative manner)"<<endl;
    }
    else  if((x>0)&&(y<0))
    {
        cout<<"The input belongs to Quadrant-3 :"<<endl;
        cout<<"(where X is positive and Y is negative manner)"<<endl;
    }
}


int fun()
    {

    return (x,y);
    }
