/* 
name:manish silpakar
subject:programming fundamental
programme: to enter length in centimeter and convet it into meter and kilometer(no argument, no return type)
roll no:
lab sheet no:20
date:19 january 2017
*/
#include<stdio.h>
void length();
int main()
{
length();
return 0;
}
void length()
{
int a,m,km;
printf("Enter the centimeter:");
scanf("%d",&a);
m=(a/100);
printf("\nInter change into meter is %d",m);
km=(a/100000);
printf("\nInter change into kilometer is %d",km);
}
