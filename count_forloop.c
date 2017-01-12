/*
name:manish silpakar
programme: to count number of digits in any number
subject:programming fundamental-
roll no:
lab sheet no:17
date:12/01/2017
*/

#include<stdio.h>
int main()
{
	int a,count=0;
	printf("enter the any number:");
	scanf("%d",&a);
	for(;a>0;a=a/10)
	{
		count=count+1;
	}
	printf("\ncount digit number is %d",count);
return 0;
}
