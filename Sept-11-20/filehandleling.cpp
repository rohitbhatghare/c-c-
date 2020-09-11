#include<iostream>
#include<conio.h>
using namespace std;
#include<stdio.h>
#include<math.h>
int main()
{

 FILE *fp;
    fp= fopen("Hello.cpp","r");
    if(fp==NULL)
    {
        cout<<"File not present";

    }
    else
    {
        cout<<"File present";
            }
            getch();
            return 0;
}
