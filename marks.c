/*
name:manish silpakar
subject:programming fundamental
roll no:
program: to enter marks of 7 subjects
date:28/11/2016
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,g,total,average,percentage;
    printf("enter the marks of computer architecture:\n");
    scanf("%d",&a);
    printf("enter the marks of programming fundamental:\n");
    scanf("%d",&b);
    printf("enter the marks of discrete structure:\n");
    scanf("%d",&c);
    printf("enter the marks of interactive skills:\n");
    scanf("%d",&d);
    printf("enter the marks of software engineering:\n");
    scanf("%d",&e);
    printf("enter the marks of algebra:\n");
    scanf("%d",&f);
    printf("enter the marks of organization management:\n");
    scanf("%d",&g);
    total=a+b+c+d+e+f+g;
    average=total/7;
    percentage=total/7;
    printf("the total is:%d\n",total);
    printf("the average is:%d\n",average);
    printf("the percentage is:%d\n",percentage);
    getch();
    return 0;
}



