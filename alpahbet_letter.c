/*
name:Manish Silpakar
program:to check character assgined from user is alphabet or not.
subject:programming fundamental
roll no:18
date:21/12/2016
*/
#include<stdio.h>
int main()
{
	char ch;
	int ASCII;
	printf("enter the any character from user:");
	scanf("%c",&ch);
	ASCII=ch;
	if((ASCII>=65&&ASCII<=90)||(ASCII>=97&&ASCII<=122))
	{
		printf("The given character is alphabet letter");
	}
	else
	{
		printf("The given character is not alphabet letter");
	}
return 0;
}
	
