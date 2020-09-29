#include<iostream>
using namespace std;
int main()
{
    int n1,df,n2,i,ln;
    int s1=0;


    cout<<"enter the starting number : ";
    cin>>n1;

  cout<<"enter the items ";
    cin>>n2;

    cout<<"enter the common difference of A.P. series: ";
    cin>>df;

    s1 = ( n2*(2*n1+(n2-1 )*df))/2;
    ln = n1 + (n2-1) * df;
    cout<<"\nThe Sum of the  A.P. series are : \n";

    for(i=n1;i<=ln; i= i + df )
        {
         if (i != ln)
             cout<<" + ",i;
         else
             cout<<i;
    }
return 0;
}
