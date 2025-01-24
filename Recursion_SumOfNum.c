//5.  Calculate sum of numbers from 1 to n using recursion
#include <stdio.h>


int sum_of_numbers(int n) {
    if (n == 1) {
        return 1;  
		    } else {
        return n + sum_of_numbers(n - 1);  
    }
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
   printf("Sum of numbers from 1 to %d is: ", n); 
   printf("%d",sum_of_numbers(n));
    
    return 0;
}

