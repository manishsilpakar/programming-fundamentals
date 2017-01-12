v/*
name:manish silpakar
programme: to print all alphabets from a to z using for,while and do-while loop
subject:programming fundamental
roll no:
lab sheet no:17
date:12/01/2017
*/

#include<stdio.h>
int main()
{
	int n,sum=0;
	for(n=501;n<1000;n=n+2)
	{
		sum=sum+n;
	}
	printf("\t%d",sum);
	printf("\n\n");
	
	/*
	n=501;
	sum=0;
	while(n<=1000)
		{
		sum=sum+n;
		n=n+2;
	}
	printf("\t%d",sum);
	printf("\n\n");
	n=501;
	sum=0;
	do
	{
		sum=sum+n;
		n=n+2;
	}
	while(n<=1000);
	printf("\t%d",sum);
		*/
return 0;
}
