#include<stdio.h>

void main() 
{
    int n = 1, num, sum = 0;
    float average;

    do {
        printf("Enter number %d: ", n);
        scanf("%d", &num); 
	    sum += num;  
	    n++;  
    } while (n <= 10);  
    
      average = sum / 10.0;  
	  
	      
	printf("\nSum of the numbers: %d\n", sum);
    printf("Average of the numbers: %.2f\n", average);
}

