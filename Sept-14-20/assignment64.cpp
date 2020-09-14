#include <iostream>
#include <conio.h>
using namespace std; 	//introduces namespace std
int main()
{
int n, pal;
cout<<"Enter a number: \n";
cin>>n;

pal = (n / 10000) + ((n / 1000) % 10) * 10 +
((n / 100) % 10) * 100 + ((n/ 10) % 10) * 1000 + (n % 10) * 10000;
if(n== pal)
cout<<"Palindrome \n";
else
cout<<"Not palindrome";
return 0;
}
