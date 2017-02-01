/*
name:manish silpakar
subject:programming fundamental
prgoramme:to store student detail using function
roll no:15
lab sheet no:26
date:1 febuary 2017
*/
#include<stdio.h>
struct student1
{
	int batch,id;
	float percentage;
};
int main()
{
	struct student1 s1,s2,s3,s4,s5;
	printf("Enter the first student id:");
	scanf("%d",&s1.id);
	printf("etner the student batch number:");
	scanf("%d",&s1.batch);
	printf("enter the student percentage:");
	scanf("%f",&s1.percentage);
	
	
	printf("Enter the second student id:");
	scanf("%d",&s2.id);
	printf("etner the student batch number:");
	scanf("%d",&s2.batch);
	printf("enter the student percentage:");
	scanf("%f",&s2.percentage);
	
	printf("Enter the third student id:");
	scanf("%d",&s3.id);
	printf("etner the student batch number:");
	scanf("%d",&s3.batch);
	printf("enter the student percentage:");
	scanf("%f",&s3.percentage);
	
	printf("Enter the forth student id:");
	scanf("%d",&s4.id);
	printf("etner the student batch number:");
	scanf("%d",&s4.batch);
	printf("enter the student percentage:");
	scanf("%f",&s4.percentage);
	
	printf("Enter the fifth student id:");
	scanf("%d",&s5.id);
	printf("etner the student batch number:");
	scanf("%d",&s5.batch);
	printf("enter the student percentage:");
	scanf("%f",&s5.percentage);
	
	printf("First student id:%d\n batch:%d\n percentage:%.2f\n",s1.id,s1.batch,s1.percentage);
	printf("Second student id:%d\n batch:%d\n percentage:%.2f\n",s2.id,s2.batch,s2.percentage);
	printf("Third student id:%d\n batch:%d\n percentage:%.2f\n",s3.id,s3.batch,s3.percentage);
	printf("Forth student id:%d\n batch:%d\n percentage:%.2f\n",s4.id,s4.batch,s4.percentage);
	printf("Fifth student id:%d\n batch:%d\n percentage:%.2f\n",s5.id,s5.batch,s5.percentage);
	return 0;
}


