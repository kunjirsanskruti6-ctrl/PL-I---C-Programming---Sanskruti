/* Program(2)-> Write a program to make use of basic Input/Output functions using different data types.
Solution(2)-> User Defined Values 
*/
#include <stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;

    printf("\n Enter Student Roll Number: ");
    scanf("%d", &rollnum);

    printf("\n Enter Student Persentage: ");
    scanf("%f", &per);

    printf("\n Enter Student Grade: ");
    scanf(" %C", &grade);

    printf("\n------ student Information ------\n");
    printf("\n Roll Number is: %d", rollnum);
    printf("\n Percentage is: %f", per);
    printf("\n Grade is     : %c", grade);

    return 0;
}    
