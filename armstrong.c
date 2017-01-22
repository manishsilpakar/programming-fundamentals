/* 
name:manish silpakar
roll:
subject:programming fundamental
programme:to find armstrong number using function
lab sheet no:
date:22 january 2017
*/
#include<stdio.h>
int armstrong(int n);
int main()
{
int n,result;
printf("Enter the any number:");
scanf("%d",&n);
result=armstrong(n);
if(result==1)
printf("The  number is armstrong");
else
printf("The number is not armstrong");
return 0;
}
int armstrong(int n)
{
int c,b=0,t,d;
t=n;
while(n>0)
{
c=n%10;
b=(c*c*c)+b;;
n=n/10;
}
if(t==b)
{
	d=1;
return d;
}
else 
{
	d=0;
return d;
}
}



