#include <iostream>
using namespace std;

int main()
{
   int a1[100],i=0,n,q,ins;
       cout<<"Enter the size of array : ";
    cin>>n;
cout<<"Input "<<n<<" elements in the array in ascending order:\n";
       for(i=0;i<n;i++)
            {

	      cin>>a1[i];
	    }
   cout<<"Enter the value want to insert : ";
   cin>>ins;
   cout<<"The exist array:\n ";
   for(i=0;i<n;i++)
      cout<<a1[i];

   for(i=0;i<n;i++)
     if(ins<a1[i])
     {
       q = i;
       break;
     }

      a1[i]= a1[i-1];

      a1[q]=ins;

      cout<<"\n\n After Insertion :\n ";
   for(i=0;i<=n;i++)
     cout<<a1[i];
	  cout<<"\n";

	  return 0;
}
