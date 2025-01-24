//10.Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
#include <stdio.h>


void factorial() {
    int n = 5;  
    int i, fact=1;



        for (i = 1; i <= n; i++) {
            fact =fact*i;  // Multiply fact by each number from 1 to n
        }
        printf("Factorial of %d is %d\n", n, fact);
    }



void sum_of_series() {
    int i, j, fact, sum = 0;

    for (i = 1; i <= 5; i++) {
        fact = 1;

        
        for (j = 1; j <= i; j++) {
            fact *= j;  
        }

        sum = sum+fact / i;
    }


    printf("The sum of the series is: %d\n", sum);
}

int main() {
    
    sum_of_series();
    
    
}

