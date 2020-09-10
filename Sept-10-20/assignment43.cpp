#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int n, r = 0;

  cout<<("Enter a number to reverse\n");
  cin>>n;

  while (n != 0)
  {
    r = r * 10;
    r = r + n%10;
    n = n/10;
  }

  cout<<"Reverse of the number is :\n"<<r;

  return 0;
}

