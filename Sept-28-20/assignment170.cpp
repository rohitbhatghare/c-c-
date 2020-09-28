#include<iostream>
using namespace std;
int main()
{
int num,r,sum=0,t;

    cout<<"Enter a number: \n";
    cin>>num;

    for(t=num;num!=0;num=num/10){
         r=num % 10;
         sum=sum*10+r;
    }
    if(t==sum)
         cout<<num<<" is a palindrome number."<<t<<endl;
    else
         cout<<num<<" is not a palindrome number."<<t;

         return 0;
}
