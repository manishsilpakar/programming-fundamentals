/* 
name:manish silpakar
subject:programming fundamental
programme: to print fibonancci series upto n terms(argument,no return type)
roll no:
lab sheet no:20
date:19 january 2017
*/
#include<stdio.h>
void fibonancci(int n);
int main()
{
	int n;
	printf("Enter the number upto n term:");
	scanf("%d",&n);
	fibonancci (n);
	return 0;
}
void fibonancci(int n)
{
	int a=1,b=1,i,c;
	printf("%d \t%d",a,b);
	for(i=1;i<=n;i++)
{
	c=a+b;
	printf("\t%d",c);
	a=b;
	b=c;
}
}
	
	
	
