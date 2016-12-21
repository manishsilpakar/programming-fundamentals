/*
name:Manish Silpakar
program:to check character assgined from user is vowel or not
subject:programming fundamental
roll no:18
date:21/12/2016
*/
#include<stdio.h>
int main()
{
	char ch;
	printf("enter the any character from user:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("The given character is vowel letter");
	}
	else
	{
		printf("The given character is consonent");
	}
return 0;
}
	
