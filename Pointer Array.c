//// 4.Write a program in C to store n elements in an array and print the elements using a pointer.
#include <stdio.h>
#include <stdlib.h>  

int main() {
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    int *arr = (int*) malloc(num * sizeof(int));
    
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", num);
    int i;  // Declare the loop variable outside the for loop
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    printf("Elements in the array:\n");
    for (i = 0; i < num; i++) {
        printf("%d ", *(ptr + i)); 
    }
    printf("\n");

    
    free(arr);
 
	
	}

