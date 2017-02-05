/*
name:manish silpakar
programme: to demonstrate the use of array and function
subject:programming fundamental
lab sheet no:28
roll no:15
date:5th febuary 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a[5]={1,2,3,4,5};
    int *p[5];
    for(i=0;i<5;i++)
    {

        p[i]=&a[i];
        printf("memory address=%d\n",p[i]);
    }
getch();
return 0;
}

