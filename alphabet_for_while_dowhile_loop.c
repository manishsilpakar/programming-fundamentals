/*
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
	char ch;
	printf("Enter the any character:");
	scanf("%c",&ch);
	for(ch=65;ch<=90;ch++)
	{
		printf("\t%c",ch);
	}
	printf("\n\n");
	
	ch=97;
	while(ch<=122)
	{
		printf("\t%c",ch);
		ch++;
	}
	printf("\n\n");
	ch=65;
	do
	{
		printf("\t%c",ch);
		ch++;
	}
	
		while(ch<=90);
return 0;
}
