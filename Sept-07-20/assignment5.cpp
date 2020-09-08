#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    float x1,y1,x2,y2,distance;
    cout<<"Enter the value of x1 : "<<endl;
	cin>>x1;
	cout<<"Enter the value of y1 :"<<endl;
	cin>>y1;
    cout<<"Enter the value of x2 : "<<endl;
	cin>>x2;
	cout<<"Enter the value of y2 : "<<endl;
	cin>>y2;
	distance=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	cout<<"Distance Between Points are : "<<sqrt(distance)<<endl;
	return 0;
}
