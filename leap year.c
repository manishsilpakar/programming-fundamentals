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
int y;
printf("Enter the year:");
scanf("%d",&y);
(y%100==0)?printf("The year is not a leap year"):
(y%4==0)?printf("The year is leap year"):
(y%400==0)?printf("The year is a leap year"):
printf("not leap year");
return 0;
}

