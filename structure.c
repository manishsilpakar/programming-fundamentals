/*
name:manish silpakar
subject:programming fundamental
prgoramme:to create a sturcture, assign value to it and display the value[declare 2 integer variable,& one float variable]
roll no:15
lab sheet no:26
date:1 febuary 2017
*/
#include<stdio.h>
struct structure1
{
	int x,y;
	float z;
};
int main()
{
	struct structure1 s1;
	printf("enter the first integer value:");
	scanf("%d",&s1.x);
	printf("enter the second integer value:");
	scanf("%d",&s1.y);
	printf("enter the float value:");
	scanf("%f",&s1.z);
	printf("\nThe first integer value is %d",s1.x);
	printf("\nThe second integer value is %d",s1.y);
	printf("\nThe float value is %.2f",s1.z);
	return 0;
}

