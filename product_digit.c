/*
name:manish silpakar
programme: to calculate product of digit of number
subject:programming fundamental-
roll no:
lab sheet no:17
date:12/01/2017
*/

#include<stdio.h>
int main()
{
	int a,n,product=1;
	printf("enter the any number:");
	scanf("%d",&a);
	while(a>0)
	{
		
		n=a%10;
		a=a/10;
		product=product*n;
	}
	printf("\nproduct of digit number is %d",product);
return 0;
}
