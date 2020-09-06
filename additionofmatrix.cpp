#include <iostream>
using namespace std;
int main()
{
   
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int i,j;
    cout<<"enter the elements in 1st matrix";
        for(i=0;i<=1;i++)
        {
            for(j=0;j<=1;j++)
            {
            cin>>a[i][j];
        }
    }
        cout<<"entered array is"<<endl<<a[i][j];
    
    
    cout<<"enter 2nd array elements";
    for(i=0;i<=1;i++)
        {
            for(j=0;j<=1;j++)
            {
            cin>>b[i][j];
        }
    }
    cout<<"the addition of a and b matrices are";
    for(i=0;i<=1;i++)
        {
            for(j=0;j<=1;j++)
            {
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<endl;
        }
    }
    return 0;
}

