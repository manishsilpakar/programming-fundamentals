/*
name:manish silpakar
roll no:18
program: to create a calculator
subject:proramming fundamental
lab sheet no:13
date:14\12\2016
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,a,b,addition,subtraction,multiplication,division;
printf("\tsimple calculator");
printf("\nchoose any number");
printf("\n1 for Addition");
printf("\n2 for Subtraction");
printf("\n3 for Multliplication");
printf("\n4 for Division\n");
scanf("%d",&n);
switch(n)
{
	case 1:
				printf("\nEnter the First number:");
				scanf("%d",&a);
				printf("\nEnter the second number:");
				scanf("%d",&b);
				addition=a+b;
				printf("The addition of two number is %d",addition);
				break;


	
	case 2:
				printf("\nEnter the First number:");
				scanf("%d",&a);
				printf("\nEnter the second number:");
				scanf("%d",&b);
				subtraction=a-b;
				printf("The subtraction of two number is %d",subtraction);
				break;


	
	case 3:
				printf("\nEnter the First number:");
				scanf("%d",&a);
				printf("\nEnter the second number:");
				scanf("%d",&b);
				multiplication=a*b;
				printf("The multiplication of two number is %d",multiplication);
				break;
			
	case 4:
				printf("\nEnter the First number:");
				scanf("%d",&a);
				printf("\nEnter the second number:");
				scanf("%d",&b);
				division=a/b;
				printf("The division of two number is %d",division);
				break;
	case 5:
				exit(0);
				break;
	default:
				printf("Thank you for visiting");

	
}

		
return 0;
}
