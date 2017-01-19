/* 
name:manish silpakar
subject:programming fundamental
programme: to enter temperature in celsius and convert it into fharenheit(no argument, with return type)
roll no:
lab sheet no:20
date:19 january 2017
*/
#include<stdio.h>
float degree();
int main()
{
float result;
result=degree();
printf("The temperature in fahrenheit is %.2f",result);
return 0;
}
float degree()
{
float c,b;
printf("Enter the temperature in celsius:");
scanf("%f",&c);
b=((c*1.8)+32);
return b;
}
