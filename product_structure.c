/*
name:manish silpakar
subject:programming fundamental
programme: to find product of three number using strucute and passing structure as argument in function
roll no:15
lab sheet no:27
date:2 febuary 2017
*/
#include<stdio.h>
struct product
{
int a,b,c;
}mul;
int product(struct product mul);
int main()
{
	int result;
	printf("enter the first number:");
	scanf("%d",&mul.a);
	printf("enter the second number:");
	scanf("%d",&mul.b);
	printf("enter the third number:");
	scanf("%d",&mul.c);
	result=product(mul);
	printf("The product of three number is %d",result);
	return 0;
}

int product(struct product mul)
{
int pro;
pro=mul.a*mul.b*mul.c;
return pro;
}

