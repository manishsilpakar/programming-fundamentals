/*
name:Manish silpakar
subject:programming fundamental
prgoramme: To find cube of any number using function (function with no argument and number return types)
roll no:
lab sheet no:19
date:17/01/2017
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void cube();

int main()
{
cube();
return 0;
}
void cube()
{
int n,cube;
printf("Enter the any number:");
scanf("%d",&n);
cube=pow(n,3);
printf("The cube of any number is %d",cube);
}
