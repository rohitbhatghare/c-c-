#include<iostream>
using namespace std;
int main()
{
    int h;

    cout<<"Input the height of the person (in centimetres) : \n";
    cin>>h;
    if (h < 150.0)
        cout<<"The person is Dwarf. \n";
    else if ((h >= 150.0) && (h < 165.0))
        cout<<"The person is  average heighted. \n";
    else if ((h >= 165.0) && (h <= 195.0))
        cout<<"The person is taller. \n";
    else
        cout<<"Abnormal height.\n";

        return 0;
}
