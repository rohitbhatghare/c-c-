#include<iostream>
using namespace std;
int main()
{
	int c1,c2;

	cout<<"Input the values for X and Y coordinate : ";
	cin>>c1,c2;

	if( c1 > 0 && c2 > 0)
	  cout<<"The coordinate point"<<c1<<c2<<" lies in the First quandrant.\n";
	else if( c1 < 0 && c2 > 0)
	  cout<<"The coordinate point" <<c1<<c2<<" lies in the Second quandrant.\n";
	else if( c1 < 0 && c2 < 0)
	  cout<<"The coordinate point" <<c1<<c2<<" lies in the Third quandrant.\n";
	else if( c1 > 0 && c2 < 0)
	 cout<<"The coordinate point "<<c1<<c2<< "lies in the Fourth quandrant.\n";
	else if( c1 == 0 && c2 == 0)
	  cout<<"The coordinate point "<<c1<<c2<<  "lies at the origin.\n";

	  return 0;

}
