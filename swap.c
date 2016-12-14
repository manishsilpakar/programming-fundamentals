/*
name:manish silpakar
roll no:18
program: to print two number using temporary variable (third variable)
subject:proramming fundamental
lab sheet no:13
date:14\12\2016
*/

#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter the value of A before swap:");
scanf("%d",&a);
printf("Enter the value of B before swap:");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("The value of A after swap is %d",a);
printf("\nThe value of B after swap is %d",b);
return 0;
}

