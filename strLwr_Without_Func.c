#include<stdio.h>

void main() {
    char str[] = "SAEEM";
    int i;


    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 'a' - 'A'; 
			        }
    }

    printf("%s", str);
}

