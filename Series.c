//10.Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
#include <stdio.h>

void factorial() {
    int n = 5;  
    int i, fact;

    for (n = 1; n <= 5; n++) {
        fact = 1;  // Reset the factorial for each number
        for (i = 1; i <= n; i++) {
            fact *= i;  // Multiply fact by each number from 1 to n
        }
        printf("Factorial of %d is %d\n", n, fact);
    }
}

// Function to calculate the sum of the series
void sum_of_series() {
    int i, j, fact, sum = 0;

    for (i = 1; i <= 5; i++) {
        fact = 1;

        // Calculate factorial for each i
        for (j = 1; j <= i; j++) {
            fact *= j;  // Multiply fact by each number from 1 to i
        }

        // Add factorial(i) / i to the sum
        sum += fact / i;
    }

    // Print the sum of the series directly
    printf("The sum of the series is: %d\n", sum);
}

int main() {
    // Call the function to calculate and print the sum of the series
    sum_of_series();
    
    return 0;
}

