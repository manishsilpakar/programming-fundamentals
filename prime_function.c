/* 
name:manish silpakar
roll:
subject:programming fundamental
programme: t check entered number is prime or not using function
lab sheet no:
date:22 january 2017
*/
#include<stdio.h>
void prime();
int main()
{
prime();
return 0;
}
void prime()
{
	int n,i,count=0;
	printf("Enter the any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
		
	}
	if(count==2)
	{
		printf("It is prime number");
	}
		else	
		{
			printf("It is not prime number");
		}
	
}
