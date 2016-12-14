/*
name:manish silpakar
roll no:18
program: to print two number without using third variable 
subject:proramming fundamental
lab sheet no:13
date:14\12\2016
*/

#include<stdio.h>
int main()
{
int a,b;
printf("Enter the value of first number before swap is:");
scanf("%d",&a);
printf("Enter the value of second number before swap is:");
scanf("%d",&b);
a=a-b;
b=a+b;
a=b-a;
printf("The value of first number after swap is %d",a);
printf("\nThe value of second number after swap is %d",b);
return 0;
}

