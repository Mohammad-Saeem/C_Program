#include<stdio.h>

void main() {
    int num;
    int *p1;
    int *p2;
    int fac = 1;
    int i;  

    printf("Enter number for the factorial: ");
    scanf("%d", &num);

    p1 = &num;
    p2 = &fac;

    for (i = 1; i <= *p1; i++) { 
        *p2 = *p2 * i;  
    }

    printf("Factorial of number %d is: %d\n", *p1, *p2);
}

