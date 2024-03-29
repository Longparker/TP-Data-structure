#include<stdio.h>
#include<math.h>

//Problem5. Write a C program to ask for 10 numbers(10 variables). What are the max and min numbers among these 10 number?

int main()
{
    int n1 , n2 , n3 , n4 , n5 , n6 , n7 , n8 , n9 , n10 , max , min ;
    printf("Enter number#1: ");scanf("%d" , &n1);
    printf("Enter number#2: ");scanf("%d" , &n2);
    printf("Enter number#3: ");scanf("%d" , &n3);
    printf("Enter number#4: ");scanf("%d" , &n4);
    printf("Enter number#5: ");scanf("%d" , &n5);
    printf("Enter number#6: ");scanf("%d" , &n6);
    printf("Enter number#7: ");scanf("%d" , &n7);
    printf("Enter number#8: ");scanf("%d" , &n8);
    printf("Enter number#9: ");scanf("%d" , &n9);
    printf("Enter number#10: ");scanf("%d" , &n10);
    min = n1;
    max = n1;

    if (n2 < min)
    {
        min = n2;
    }
    if (n3 < min)
    {
        min = n3;
    }
    if (n4 < min)
    {
        min = n4;
    }
    if (n5 < min)
    {
        min = n5;
    }
    if (n6 < min)
    {
        min = n6;
    }
    if (n7 < min)
    {
        min = n7;
    }
    if (n8 < min)
    {
        min = n8;
    }
    if (n9 < min)
    {
        min = n9;
    }
    if (n10 < min)
    {
        min = n10;
    }

    if (n2 > max)
    {
        max = n2;
    }
    if (n3 > max)
    {
        max = n3;
    }
    if (n4 > max)
    {
        max = n4;
    }
    if (n5 > max)
    {
        max = n5;
    }
    if (n6 > max)
    {
        max = n6;
    }
    if (n7 > max)
    {
        max = n7;
    }
    if (n8 > max)
    {
        max = n8;
    }
    if (n9 > max)
    {
        max = n9;
    }
    if (n10 > max)
    {
        max = n10;
    }
    printf("The maximum number is %d and the minimum number is %d",max,min);
    return 0;
}
