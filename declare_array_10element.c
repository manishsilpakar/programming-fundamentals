/*
name:manish silpakar
sbuject:programming fundamental
programme: to declare an area of 10 elements and search a particular element to display whether it exist or not
roll no:15
lab sheet no:28
date:5th febuary 2017
*/

#include<stdio.h>
int main()
{
	int array[10]={1,8,78,21,12,4,5,6,8,10};
	int n,i,f;
	printf("enter the number to search:\n");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(n==array[i])
		f=1;
	}
	if(f==1)
	
		printf("The number exist");
		else
		printf("The number does not exist");
	
	return 0;
}

