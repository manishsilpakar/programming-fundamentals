/* 
name:manish silpakar
subject:programming fundamental
programme: to print factorial using function
roll no:
lab sheet no:20
date:19 january 2017
*/
#include<stdio.h>
int fact(int n);
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("The factorial number is %d",fact(n));
	return 0;
}
int fact(int n)
{
	
	if(n==1)
	{
		return 1;
	}
	else
	{
	return n*fact(n-1);
	}
}

