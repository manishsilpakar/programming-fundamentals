/*
name:Manish silpakar
subject: programming fundamental
roll no:
program: write a program to print area of semi-triangle
lab sheet no:4
date:21/11/2016
 */
 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 int main()
 {
 float a,b,c,s,area,e;
 printf("enter the first side of triangle");
 scanf("%f",&a);
 printf("enter the second side of triangle");
 scanf("%f",&b);
 printf("enter the third side of triangle");
 scanf("%f",&c);
 s=(a+b+c)/2;
 e=s*(s-a)*(s-b)*(s-c);
 area=pow(e,0.5);
 printf("area of semi triangle is:%f",area);
 getch();
 return 0;

 }

