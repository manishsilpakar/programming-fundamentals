/*
name:manish silpakar
subject:programming fundmental
program:
roll no:18
lab sheet no:10
date:5/12/2016
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    float a;
    printf("enter the first number:\n");
    scanf("%f",&a);
    if(a>=80)
    {
        printf("distinction");
    }
    if (a>=60&&a<80)
    {
        printf("first division");
    }
    if (a>=50&&a<60)
    {
        printf("second division");
    }
    if (a>=40&&a<50)
    {
        printf("third division");
    }
    if(a>=30&&a<40)
    {
        printf("fail");
    }
    getch();
    return 0;

}
