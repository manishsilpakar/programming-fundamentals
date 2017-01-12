/*
name:manish silpakar
programme: to print table of any number
subject:programming fundamental-
roll no:
lab sheet no:17
date:12/01/2017
*/

#include<stdio.h>
int main()
{
	int i,n,a;
	printf("enter the any number:");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		n=a*i;
		printf("\n%d * %d = %d",a,i,n);
	}
return 0;
}
