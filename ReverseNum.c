//Reverse number using do while loop.
#include <stdio.h>

void main() 
{
    int num, reversed = 0, remainder;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    do {
        remainder = num % 10; 
        reversed = reversed * 10 + remainder; 
        num =num/10; 
    } while (num != 0); // Continue until num becomes 0

    printf("Reversed number: %d\n", reversed);

    
}

