#include<stdio.h>

void main() {
    int a[3] = {5, 2, 8}; 
    int i, min;

    min = a[0];

    
    for(i = 1; i < 3; i++) {
        if(a[i] < min) {
            min = a[i];  
        }
    }

    
    printf("%d", min);
}

