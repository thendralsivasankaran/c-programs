//program of asterisk pattern//
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=0;i<5;i++)
{
if(i==0||i==4)
{
for(j=0;j<5;j++)
{
if(j==2)
printf("\t*");
else
printf("\t");
}
}
else if(i==1||i==3)
{
for(j=0;j<5;j++)
{
if(j==1||j==2||j==3)
printf("\t*");
else
printf("\t");
}
}
else
{
for(j=0;j<5;j++)
printf("\t*");
}
printf("\n");
}
getch();
}

OUTPUT IS
    *
  * * *
* * * * *
  * * *
    *