#include<iostream>
using namespace std;
int main()
{
    int i,j,n,a1[100],a2[100];

    cout<<"Enter the number of elements \n";
    cin>>n;
    cout<<"Enter elements of array \n";

    for(i=0;i<n;i++)
    {

        cin>>a1[i];
        a2[i]=-1;

    }
    for(i=0; i<n; i++)
    {
        int ctr = 1;
        for(j=i+1; j<n; j++)
        {
            if(a1[i]==a1[j])
            {
                ctr++;
                a2[j] = 0;
            }
        }
         if(a2[i]!=0)
        {
            a2[i] = ctr;
        }
    }
    cout<<"The frequency of all elements of array : \n";
    for(i=0; i<n; i++)
    {
        if(a2[i]!=0)
        {
            cout<<a1[i]<<"  occurs"<<a2[i]<<" times\n";
        }
    }
}

