/*
name:manish silpakar
programme: to calculate sum of digits any number
subject:programming fundamental-
roll no:
lab sheet no:17
date:12/01/2017
*/

#include<stdio.h>
int main()
{
	int a,n,sum=0;
	printf("enter the any number:");
	scanf("%d",&a);
	for(;a>0;a=a/10)
	{
		
		n=a%10;
		sum=sum+n;
	}
	while(a>0);
	printf("\nsum of digit number is %d",sum);
return 0;
}
