//program of asterisk pattern//
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=4;i++)
{
if(i==1||i==4)
{
for(j=1;j<=4;j++)
printf("*\t");
}
else
{
for(k=1;k<=4;k++)
{
if(k==1||k==4)
printf("*\t");
else
printf("\t");
}
}
printf("\n");
}
getch();
}

OUTPUT IS
* * * *
*     *
*     *
* * * *