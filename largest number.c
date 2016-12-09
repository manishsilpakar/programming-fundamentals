/*
name:manish silpakar
roll no:18
program: to print the largest number among 3 number using ternary operator
subject:proramming fundamental
lab sheet no:12
date:09\12\2016
*/

#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
printf("enter the value of c:");
scanf("%d",&c);
(a>=b&&a>=c)?printf("\n%d is a largest number",a):(b>=c)?printf("\n%d is a largest number",b):printf("\n%d is a largest number",c);
return 0;
}
