/*
name:manish silpakar
subject:programming fundamental
roll no:
program: to print arthematic operation
lab sheet no:6
date:25/11/2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,add,sub,multi,divi,modulus;
    printf("enter the first number:\n");
    scanf("%d",&a);
    printf("enter the second number:\n");
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    multi=a*b;
    divi=a/b;
    modulus=a%b;
    printf("addtion of two number is:\n%.2d\n",add);
    printf("\nsubtraction of two number is:\n%.2d\n",sub);
    printf("\nmultiplication of two number is:\n%.2d\n",multi);
    printf("\ndivsion of two number is:\n%.2d\n",divi);
    printf("\nmodulus of two number is:\n%.2d\n",modulus);
       getch();
       return 0;
}
