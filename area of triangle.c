/* Name: Manish Silpakar
subject:Programming Fundmental
program:Write a C program to print are of triangle
lab no.: 4
date:21/11/2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float b,h,area;
printf("enter the base\n");
scanf("%f",&b);
printf("enter the height\n");
scanf("%f",&h);
area=(b*h)/2;
printf("the area is %f\n",area);
getch();
return 0;
}
