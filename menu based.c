/*
name:manish silpakar
roll no:18
programme:menu based program
subject:programming fundamental
lab sheet no:14
date:28/12/2016
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a,n,i,ASCII,count=0;
    char ch;
    printf("choose any menu base:");
    printf("\n1 for odd or even");
    printf("\n2 for prime or not");
    printf("\n3 for vowel or not");
    printf("\n4 for alphabet or not");
    printf("\n5 for divisible or not");
    printf("\n6 for exit\n");
    printf("Enter any number:");
    scanf("%c",&ch);
    switch(n){
                case 1:
                    printf("Enter any number:");
                    scanf("%d",&a);
                    if(a%2==0)
                    {
                        printf("The number is even");
                    }
                    else
                    {
                        printf("The number is odd");
                    }
                    break;




                case 2:
                break;



                case 3:
                    printf("Enter any character:");
                    scanf("%c",&ch);
                    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                    {
                        printf("The character is vowel");
                    }
                    else
                    {
                        printf("The character is consonant");
                    }
                    break;



                case 4:
                     printf("Enter any character:");
                    scanf("%c",&ch);
                    ASCII=ch;
                    if((ASCII>=65&&ASCII<=97)||(ASCII>=97||ASCII<=122))
                    {
                        printf("The character is alphabet");
                    }
                    else
                    {
                        printf("The number is not alphabet");
                    }
                    break;



                case 5:
                    printf("Enter any number:");
                    scanf("%d",&a);
                    if(a%5==0&&a%11==0)
                    {
                        printf("The number is divisible by 5&11");
                    }
                    else
                    {
                        printf("The number is not divisible by 5&11");
                    }
                    break;



                case 6:
                    printf("\nThank you for visiting!!!! :) :) :)");
                    exit(0);

                    break;


}
getch();
return 0;
}
