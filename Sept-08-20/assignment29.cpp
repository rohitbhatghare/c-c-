#include <stdio.h>

int main ()
{
int i, row, col;
printf("Input number of lines: ");
scanf("%d", &row);
printf("Number of characters in a line: ");
scanf("%d", &col);

for(i=1; i<=row*col; i++)
{
printf("%d ", i);

if(i%col==0)
{
printf("\n");
}

}
return 0;
}
