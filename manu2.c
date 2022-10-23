#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,num,big,small;
    while(1)
    {
     printf("\n1. Check whether a given set of three numbers are lengths of an isosceles triangle or not");
     printf("\n2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
     printf("\n3. Check whether a given set of three numbers are equilateral triangle or not");
     printf("\n4. Exit");
     printf("\nEnter A Option From Above\n");
     scanf("%d",&num);
     switch(num)
     {
        case 1:
        printf("Enter The Lenght Of Three Sides\n");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b)
        printf("Your Triangle Is Isosceles Triangle\n");
        else if(b==c)
        printf("Your Triangle Is Isosceles Triangle\n");
        else if(c==a)
        printf("Your Triangle Is Isosceles Triangle\n");
        else
        printf("Your Triangle Is Not Isosceles Triangle\n");
        break;
        case 2:
        printf("Enter The Lenght Of Three Sides\n");
        scanf("%d%d%d",&a,&b,&c);
        if(a>b&&a>c)
        {
            big=a*a;
            small=b*b+c*c;
            if(big==small)
            {
                printf("Your Triangle Is Right Angled Triangle\n");
            }
            else
           {
               printf(" Your Triangle Is Not Right Angled Triangle\n");
           }
        }
        else if(b>a&&b>c)
        {
            big=b*b;
            small=a*a+c*c;
            if(big==small)
            {
                printf("Your Triangle Is Right Angled Triangle\n");
            }
            else
           {
               printf(" Your Triangle Is Not Right Angled Triangle\n");
           }
        }
        else if(c>a&&c>b)
        {
            big=c*c;
            small=a*a+b*b;
            if(big==small)
            {
                printf("Your Triangle Is Right Angled Triangle\n");
            }
            else
           {
               printf(" Your Triangle Is Not Right Angled Triangle\n");
           }
        }
        break;
        case 3:
        printf("Enter The Lenght Of Three Sides\n");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b&&a==c)
        printf("You Triangle Is Equilateral Triangle\n");
        else if(b==c&&b==a)
        printf("You Triangle Is Equilateral Triangle\n");
        else if(c==a&&c==b)
        printf("You Triangle Is Equilateral Triangle\n");
        else
        printf("You Triangle Is Not Equilateral Triangle\n");
        break;
        case 4:
        exit (0);
     }
    }
    return 0;
}