/*
name:manish silpakar
subject:programming fundamental
roll no:
program: to check the number whether number is odd or even
lab sheet no:6
date:25/11/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("enter a number:\n");
scanf("%d",&n);
if (n%2==0)
{
printf("number is even");
}
else if (n%2==1)
{
  printf("number is odd");
}
getch();
return 0;
}
