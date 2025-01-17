#include<stdio.h>

void main() {
    char str[] = "saeem";
    int i;


    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A'; 
	}
    }

    
    printf("%s", str);
}

