//13. C program to calculate number is armstrong or not.

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

  
    originalNum = num;

      do {
        num = num/10;
        n++;
    } while (num != 0); 

    
    num = originalNum;

    
    do {
        remainder = num % 10;  
        result += pow(remainder, n);
        num =num/10;  
    } while (num != 0);  

    
    if (result == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

}
