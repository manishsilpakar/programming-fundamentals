/* 
name:manish silpakar
roll:
subject:programming fundamental
programme: t check entered number is prime or not using function
lab sheet no:
date:22 january 2017
*/
#include<stdio.h>
int prime(int n);
int main()
{
int n,result;
printf("Enter the any number:");
scanf("%d",&n);
result=prime(n);
if(result==1)printf("It is prime number");
else
printf("It is not prime number");
return 0;
}
int prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
		
	}
	if(count==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
	

