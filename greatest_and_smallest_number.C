#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2;
clrscr();
printf("Enter the 1st number \n");
scanf("%d",&num1);
printf("Enter the 2nd number \n");
scanf("%d",&num2);
if(num1<num2)
{
printf("\n The 1st number is greater",num1);
}
else if(num2>num1)
{
printf("\n The 2nd number is greater",num2);
}
else if(num1==num2)
{
printf("\n Both numbers are equal",num1,num2);
}
getch();
}