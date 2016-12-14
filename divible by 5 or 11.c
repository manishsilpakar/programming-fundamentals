/*
name:manish silpakar
roll no:18
program: to print to check number is divisible by 5&11 or not 
subject:proramming fundamental
lab sheet no:13
date:14\12\2016
*/

#include<stdio.h>
int main()
{
int n;
printf("Enter the any number:");
scanf("%d",&n);
if(n%5==0&&n%11==0)
{
	printf("The number is divisible by 5 or 11");

}
else
{
	printf("\nIt is not divisible number by 5 or 11");
}
return 0;
}
