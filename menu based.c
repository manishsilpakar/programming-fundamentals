/*
name:manish silpakar
roll no:18
programme:menu based program
subject:programming fundamental
lab sheet no:14
date:28/12/2016
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,ASCII;
    char ch;
    printf("choose any menu base:");
    printf("\n1 for odd or even");
    printf("\n2 for prime or not");
    printf("\n3 for vowel or not");
    printf("\n4 for alphabet or not");
    printf("\n5 for divisible or not");
    printf("\n6 for exit\n");
    printf("enter any character:");
    scanf("%c",&ch);
    printf("Enter any number from above:");
    scanf("%d",&n);
    switch(n)
    {
                case 1:
                   n=ch;
                    if(n%2==0)
                    {
                        printf("The number %d is even",n);
                    }
                    else
                    {
						
                        printf("The number %d is odd",n);
                    }
                    break;




                case 2:
                break;



                case 3:
                    
                    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                    {
                        printf("The character %c is vowel",ch);
                    }
                    else
                    {
                        printf("The character %c is consonant",ch);
                    }
                    break;



                case 4:
                     
                    ASCII=ch;
                    //printf("ascii value is: %d", ASCII);
                    if((ASCII>=65&&ASCII<=90)||(ASCII>=97&&ASCII<=122))
                    {
                        printf("The character %c is alphabet",ch);
                    }
                    else
                    {
                        printf("The character %c is not alphabet",ch);
                    }
                    break;



                case 5:
                n=ch;
                    if(n%5==0&&n%11==0)
                    {
                        printf("The number %d is divisible by 5&11",n);
                    }
                    else
                    {
                        printf("The number %d is not divisible by 5&11",n);
                    }
                    break;



                case 6:
                    printf("\nThank you for visiting!!!! :) :) :)");
                    exit(0);

                    break;


}
return 0;
}
