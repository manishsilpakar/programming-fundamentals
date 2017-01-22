/* 
name:manish silpakar
roll:
subject:programming fundamental
programme:to find pallendrone number using function
lab sheet no:
date:22 january 2017
*/
#include<stdio.h>
void pallendrone();
int main()
{
pallendrone();
return 0;
}
void pallendrone()
{
int n,reve=0,temp;
printf("Enter the any number:");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
	reve=reve*10;
	reve=reve+temp%10;
	temp=temp/10;
}
if(n==reve)
{
printf("The number is pallendrone");
}
else
{
printf("The number is not pallendrone");
}
}


