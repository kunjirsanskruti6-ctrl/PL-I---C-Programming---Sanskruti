/*
Program (6)-> Write a Program to calculate the average of three nummbers.
Soluton(2)-> User Defined Values
*/

#include <stdio.h>
int main()
{
    int num1, num2, num3, total;
    float average;
    printf(" Enter first number: ");
    scanf("%d",&num1);
    printf(" Enter second number: ");
    scanf("%d",&num2);
    printf(" Enter third number: ");
    scanf("%d",&num3);

    total = (num1+num2+num3);
    average = total / 3;
    printf("\n Average= %f",average);

    return 0;
}