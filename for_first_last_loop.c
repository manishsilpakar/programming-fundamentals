/*
name:manish silpakar
programme: to print first and last digit of any number
subject:programming fundamental-
roll no:
lab sheet no:17
date:12/01/2017
*/

#include<stdio.h>
int main()
{
	int a,i,n;
	printf("enter the any number:");
	scanf("%d",&a);
	i=a%10;
	printf("last digit of number is %d",i);
	for(;a>0;a=a/10)
	{
		n=a%10;
	}
	printf("\nFirst digit number is %d",n);
return 0;
}
