//14 .C program to calculate product of numbers.

#include <stdio.h>

int main() {
    int num, product = 1;

    printf("Enter numbers to multiply and enter 0 to stop:\n");

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num != 0) {
            product =product*num;  
        }

    } while (num != 0); 

    printf("The product of the numbers is: %d\n", product);

    
}

