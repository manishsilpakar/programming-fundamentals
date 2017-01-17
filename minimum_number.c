/*
name:Manish silpakar
subject:programming fundamental
prgoramme: To find minimum number between two number using function(function withour argument and but with return types)
roll no:
lab sheet no:19
date:17/01/2017
*/

#include<stdio.h>
int minimum();

int main()
{
	int result;
	result =minimum();
	printf("Minimum number is %d",result);
	return 0;
}

int minimum()
{
	int a,b;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	if(a<b)
		return a;
	else
		return b;
}
