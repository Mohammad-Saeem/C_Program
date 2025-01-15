#include<stdio.h>

void main() {
    int n, count = 1, odd = 1, sum = 0;

   
    printf("Enter the number of terms: ");
    scanf("%d", &n);

       printf("\nOdd natural numbers: ");
    do {
        printf("%d ", odd);  
        sum =sum+odd;  
        odd =odd+2;
        count++;  
    } while(count <= n); 
	
	  printf("\nSum of the first %d odd natural numbers: %d\n", n, sum);
}

