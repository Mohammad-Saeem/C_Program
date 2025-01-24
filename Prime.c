#include <stdio.h>

void prime()
{
    int num;
    int i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("The number is not prime\n");
        return;
    }

    
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            printf("The number is not prime\n");
            return;
        }
    }

    printf("The number is prime\n");
}

int main() {
    prime();
    return 0;
}

