/*
name:Manish silpakar
subject:programming fundamental
prgoramme: To find cube of any number using function (function with no argument and number return types)
roll no:
lab sheet no:19
date:17/01/2017
*/

#include<stdio.h>
void diameter(int x);
void circumference(int x);
void area(int x);

int main()

{
int a;
printf("Enter the radius of circle:");
scanf("%d",&a);
diameter(a);
circumference(a);
area(a);
}
void diameter(int x)
{
	int d;
	d=2*x;
	printf("The diameter of circle is %d",d);
}
void circumference(int x)
{
	int c;
	c=2*3.14*x;
	printf("\nthe circumference of circle is %d",c);
}
void area(int x)
{
	int area;
	area=3.14*x*x;
	printf("\nThe area of circle is %d",area);
}
