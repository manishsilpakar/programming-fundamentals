/* 
name:manish silpakar
roll:
subject:programming fundamental
programme:to find reverse number using function
lab sheet no:
date:22 january 2017
*/
#include<stdio.h>
void reverse();
int main()
{
reverse();
return 0;
}
void reverse()
{
int n,reve=0;
printf("Enter the any number:");
scanf("%d",&n);
while(n!=0)
{
	reve=reve*10;
	reve=reve+n%10;
	n=n/10;
}
printf("reverse number is %d",reve);
}

