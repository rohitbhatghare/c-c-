#include <iostream>
#include <string>

using namespace std; 	//introduces namespace std
int main()
{
int a,b,sum,sub;
    cout<<"Enter the First Integer"<<endl;
    cin>>a;
    cout<<"Enter the Second Integer"<<endl;
    cin>>b;

    sum=a+b;
    sub=a-b;
if(sum==5 ||a==5 || b==5 || sub==5)
    {
        cout<<"True";

    }
    else

        cout<<"False";
    return 0;
}

