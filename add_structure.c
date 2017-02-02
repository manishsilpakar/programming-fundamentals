/*
name:manish silpakar
subject:programming fundamental
programme: to add 2 number using structure and using function with argument
roll no:15
lab sheet no:27
date:2 febuary 2017
*/
#include<stdio.h>
struct add1
{
int a,b;
}sum;
int add(int a, int b);
int main()
{
	int result;
	printf("enter the first number:");
	scanf("%d",&sum.a);
	printf("enter the second number:");
	scanf("%d",&sum.b);
	result=add(sum.a, sum.b);
	printf("The sum of two number is %d",result);
	return 0;
}

int add(int a, int b)
{
	int sum;
	sum =a+b;
	return sum;

}
