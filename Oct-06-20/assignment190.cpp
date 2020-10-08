#include <iostream>
using namespace std;

int main()
{
   int a1[100],i=0,n,pos;
       cout<<"Enter the size of array : ";
    cin>>n;
cout<<"Input "<<n<<" elements in the array in ascending order:\n";
       for(i=0;i<n;i++)
            {

	      cin>>a1[i];
	    }
	    cout<<"\n Enter the position where want to delete: ";
    cin>>pos;

    i=0;
        while(i!=pos-1)
            i++;
  while(i<n)

    {
            a1[i]=a1[i+1];
            i++;
  }
  n--;
   cout<<"\n The new list is : ";
  for(i=0;i<n;i++)
        {
		   cout<<a1[i];
		}
           cout<<"\n\n";
           return 0;

}
