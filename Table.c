//7.Write a program in C to display the multiplication table for a given integer.

#include<stdio.h>

void main() {
    int num, i = 1;


    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("\nMultiplication Table for %d:\n", num);
    do {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while(i <= 10);  
}

