//TO REMOVE LETTER FROM THE SECOND STRING THAT WHICH PRESENT IN THE FIRST STRING// 
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],b[20];
int n,m,i,j,k;
clrscr();
printf("\n Enter two strings");
scanf("%s%s",a,b);
n=strlen(a);
m=strlen(b);
for(i=0;i<n;i++)
for(j=0;j<m;j++)
if(a[i]==b[j])
{
for(k=j;k<m;k++)
b[k]=b[k+1];
m--;
j=-1;
}
b[k]='\0';
printf("\n The second string is: %s",b);
getch();
}
OUTPUT
Enter two strings
sivasankaran
santhi
The second string is:th
