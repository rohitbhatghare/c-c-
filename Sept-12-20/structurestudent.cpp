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
    } s1,s2,s3;
    int main()
    {

      strcpy(s1.name,"Ram");
        s1.age=16;
        strcpy(s1.add,"abc");
        s1.rn=03;

       strcpy(s2.name,"geeta");
        s2.age=18;
       strcpy(s2.add,"abc");
        s2.rn=02;

        strcpy(s3.name,"Golu");
        s3.age=10;
        strcpy(s3.add,"abc");
        s3.rn=07;

        cout<<"Student name:-"<<s1.name<<endl;
        cout<<"Student age:-"<<s1.age<<endl;
        cout<<"Student add:-"<<s1.add<<endl;
        cout<<"Student roll no.:-"<<s1.rn<<endl;

        cout<<"Student name:-"<<s2.name<<endl;
        cout<<"Student age:-"<<s2.age<<endl;
        cout<<"Student add:-"<<s2.add<<endl;
        cout<<"Student roll no.:-"<<s2.rn<<endl;

        cout<<"Student name:-"<<s3.name<<endl;
        cout<<"Student age:-"<<s3.age<<endl;
        cout<<"Student add:-"<<s3.add<<endl;
        cout<<"Student roll no.:-"<<s3.rn<<endl;
        return 0;

    }
