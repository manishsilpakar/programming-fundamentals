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
#define PI 3.14
int main()
{
float r,volume,area;
printf("enter the radius of sphere\n");
scanf("%f",&r);
area=4*PI*pow(r,2);
volume=4/3*PI*pow(r,3);
printf("area of sphere is %.2f\n",area);
printf("volume of sphere is %.2f",volume);
getch();
return 0;
}
