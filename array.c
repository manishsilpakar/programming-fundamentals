/*
name:mamish silpakar
subject:programming fundamental
programme: to print the fibonancci series using recursion function
lab sheet no:22
roll no:
Date:24 january 2017
*/

#include<stdio.h>
int main()
{
	int i,element[5];
	for(i=0;i<5;i++)
	{
		printf("enter the element %d:",i+1);
		scanf("%d",&element[i]);
	}
	printf("enter the array are:\n\n");
	for(i=0;i<5;i++)
	{
		printf("Element %d : %d\n\n",i+1,element[i]);
	}
	return 0;
}
