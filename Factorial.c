//10.Write a C program to calculate the factorial of a given number 5.
#include<stdio.h>

void main() {
    int num = 5, i = 1;
    int factorial = 1; 
 
    
    do {
        factorial =factorial*i;  
        i++;  
    } while(i <= num); 

   
     printf("Factorial of %d is: %d\n", num, factorial);
}

