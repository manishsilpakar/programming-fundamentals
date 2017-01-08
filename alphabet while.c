/*
name:manish silpakar
roll no:
programme:
subject:programming fundamental
lab sheet:15
date:08/01/2017
*/

#include<stdio.h>
int main()
{
	char ch;
	int ASCII;
	printf("Enter the any character:");
	scanf("%c",&ch);
	ASCII=ch;
	while((ASCII>=65&&ASCII<=90)||(ASCII>=97&&ASCII<=122))
	            
	{
		printf("\t%c",ASCII);
		ASCII++;
	}
	return 0;
	
}
