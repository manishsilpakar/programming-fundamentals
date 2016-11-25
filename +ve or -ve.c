/*
name:manish silpakar
subject:programming fundamental
roll no:
program: to check the number whether is positive or negative
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
if(n>0)
{
printf("number is positive");
}
else if (n<0)
{
  printf("number is negative");
}
else
  {
   printf("number is zero");
  }



getch();
return 0;
}
