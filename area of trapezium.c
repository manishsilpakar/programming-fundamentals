/*
name:manish silpakar
subject:programming fundamental
roll no:
program:write a program to print area of trapezium
lab sheet no:4
date:21/11/2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float main()
{
float a,b,h,area;
printf("enter the first side of trapezium:");
scanf("%f",&a);
printf("enter the second side of trapezium:");
scanf("%f",&b);
printf("enter the height of trapezium:");
scanf("%f",&h);
area=(a+b)/2*h;
printf("area of trapezium is:%f",area);
getch();
return 0;

}
