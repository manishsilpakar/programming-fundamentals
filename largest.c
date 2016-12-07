/*
name:manish silpakar
roll no:18
subject:programming fundamental
program: to find largest number
lab sheet no:11
*/

#include<stdio.h>
#include<conio.h>
int main ()
{
int a,b,c;
printf("enter a first number:");
scanf("%d",&a);
printf("enter a second number:");
scanf("%d",&b);
printf("enter a third number:");
scanf("%d",&c);
if(a>=b)
{
    if(a>=c)
    {
        printf("\nA is largest number");
    }
}
    else if(b>=c)
        {
            printf("\nB is largest number");
        }

        else

        {
            printf("\nC is largest number");
        }

getch();
return 0;

}

