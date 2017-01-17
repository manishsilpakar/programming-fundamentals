/*
name:Manish silpakar
subject:programming fundamental
prgoramme: To check number is even or odd using function(function with argument and with return types)
roll no:
lab sheet no:19
date:17/01/2017
*/

#include<stdio.h>
int number(int n);

int main()
{
	int n,result;
	printf("Enter the any number:");
	scanf("%d",&n);
	result=number(n);
	if(result==1)printf("The number %d is even",n);
	else if (result ==2)printf("\nThe number %d is odd",n);
	
}
int number(int n)
{

if(n%2==0)
return 1;
else 
return 2; 
}
