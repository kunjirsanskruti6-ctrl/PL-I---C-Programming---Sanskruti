// Program (10) -> Write a program that demonstrate the order of execution of operators in expressions.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);

    if(num %2 == 0)
    {
        printf("The number is Even.");
    }
    else
    {
        printf("The number is Odd.");
    }
    return 0;
}