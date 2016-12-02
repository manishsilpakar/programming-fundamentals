/*
name:manish silpakar
subject:programming fundamental
program:
roll no:18
date:2/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    printf("post increment is:%d",n++);
    printf("\npre increment is:%d",++n);
    printf("\npost decrement is:%d",n--);
    printf("\npre decrement is:%d",--n);
    getch();
    return 0;
}
