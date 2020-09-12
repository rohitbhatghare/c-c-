#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

    struct students
    {
        char name[50];
        int age;
        char add[100];
        int rn;
    };
    int main()

    {

    struct students s[1];
    int i,rol,rn;
    for(int i=0;i<2;i++)
    {
        cout<<"Enter the student name \n";
        cin>>s[i].name;
        cout<<"Enter the student age \n";
        cin>>s[i].age;
        cout<<"Enter the student address \n";
        cin>>s[i].add;
        cout<<"Enter the student Roll No. \n";
        cin>>s[i].rn;
    }



        for(int i=0;i<=5;i++)
        {

     cout<<"Enter roll number to show data";
        cin>>rn;
        if(rol==s[i].rn)
        {

            for(i=0;i<=2;i++)
            {




        cout<<"Student name:-"<<s[i].name<<endl;
        cout<<"Student age:-"<<s[i].age<<endl;
        cout<<"Student add:-"<<s[i].add<<endl;
        cout<<"Student roll no.:-"<<s[i].rn<<endl;
        }
        }


        else
        {
            cout<<"No data found";
        }
        }


        return 0;

    }
