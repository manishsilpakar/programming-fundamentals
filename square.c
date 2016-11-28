/*
name:manish silpakar
subject:programming fundamental
roll no:
program:write a program to find a square root of number
lab sheet no:5
date:/28/11/2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float n, sqr=0,sqrt=0;
printf("enter a number:\n");
scanf("%f",&n);
sqr=pow(n,2);
sqrt=pow(n,0.5);
printf("square of number is:%f\n",sqr);
printf("square root of number is:%f",sqrt);
getch();
return 0;
}
