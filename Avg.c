#include<stdio.h>
int main()
{
    float w1, w2;  // Weights
    float p1, p2;  // Prices
    float avg;     // Weighted average
    
    printf("Enter the weights: ");
    scanf("%f%f", &w1, &w2);
    
    printf("Enter the prices: ");
    scanf("%f%f", &p1, &p2);
    
    // Correct formula for weighted average
    avg = (p1 * w1 + p2 * w2) / (w1 + w2);
    
    // Output the weighted average
    printf("Weighted average is %.2f\n", avg);
    
    return 0;
}

