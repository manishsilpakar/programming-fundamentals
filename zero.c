#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("enter a number:");
scanf("%d",&n);
if(n>0)
{
        printf("number is positive");
}
else if (n==0)
{
        printf("number is zero");
}
else if (n<0)
{

        printf("number is negative");
}
else{
        printf("enter a correct number");
}
getch();
return 0;
}
