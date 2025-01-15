//write a c program to create new array of integers shifting all zeroes to left direction.
#include<stdio.h>

void main() {
    int a[6] = {1, 0, 0, 7, 0, 5};  
    int newArray[6];  
    int i, k = 0;
    
    for(i = 0; i < 6; i++) {
        if(a[i] == 0) {
            newArray[k] = a[i];
            k++;
        }
    }

    
	for(i = 0; i < 6; i++) {
        if(a[i] != 0) {
            newArray[k] = a[i];
            k++;
        }
    }
    
    
    
    for(k = 0; k < 6; k++) {
        printf("%d ", newArray[k]);
    }
}

