/*
name:manish silpakar
subject:programming fundamental
roll no:
program: to print a area and perimeter of rectangle
lab sheet no:4
date:21/11/2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float l,b,area,perimeter;
printf("enter the length of rectangle\n");
scanf("%f",&l);
printf("enter the breadth of rectangle\n");
scanf("%f",&b);
area=(l*b);
perimeter=2*(l+b);
printf("area of rectangle is %.2f\n",area);
printf("perimeter of rectangle is:%.2f",perimeter);
getch();
return 0;
}
