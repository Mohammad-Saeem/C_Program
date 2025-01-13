//14 .C program to calculate product of numbers using while loop.

#include <stdio.h>
void main() 
{
    int num, product = 1;

   printf("Enter numbers to calculate their product. Enter 0 to stop.\n");

    
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);
        product = product*num;
    }

    printf("The product of the entered number is %d",product);
    
 }

