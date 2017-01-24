/*
name:mamish silpakar
subject:programming fundamental
programme: to find the factorial of a given number using recursion function
lab sheet no:22
roll no:
Date:24 january 2017
*/

#include<stdio.h>
int fact(int n);
int main()
{
int n,result;
printf("enter any number:");
scanf("%d",&n);
result=fact(n);
printf("The factorial of given number is %d",result);
return 0;
}
int fact(int n)
{
int factorial;
if(n==1)
return 1;
else
factorial=(n*fact(n-1));
return factorial;
}
