/*
name:manish silpakar
subject:programming fundamental
roll no:
program: to check the number whether number is odd or even
lab sheet no:6
date:25/11/2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float p,t,r,ci,e;
    printf("enter the principle:\n");
    scanf("%f",&p);
    printf("enter the time:\n");
    scanf("%f",&t);
    printf("enter the rate:\n");
    scanf("%f",&r);
    e=(1+r/100);
    ci=p*pow(e,t)-1;
    printf("compound interest is:\n%.2f",ci);
    getch();
    return 0;
}
