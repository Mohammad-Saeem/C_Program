//7. Sum of all elements in an array.
#include <stdio.h>

void main() {
    int n, sum = 0, i; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int *ptr = arr; 

    for (i = 0; i < n; i++) {
        sum += *(ptr + i);  
    }

   printf("The sum of all elements in the array is: %d\n", sum);

}



