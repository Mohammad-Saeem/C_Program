#include <stdio.h>
void main() {
    char str[50];
    int vowel = 0, consonant = 0;
    int i;  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel++;
        }
        
        else if (ch >= 'a' && ch <= 'z') {
            consonant++;
        }
    }

    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonant);

}

