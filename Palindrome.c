//12.C program to find number is palindrome or not

#include <stdio.h>

void main() {
    int num, originalNum, reversed = 0, remainder;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    originalNum = num;

    do {
        remainder = num % 10;  
	    reversed = reversed * 10 + remainder;
        num =num/10;  
    } while (num != 0);
	
	    if (originalNum == reversed) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

}

