#include<stdio.h>

void main()
{
    char str1[20] = "Hello";
    char str2[] = "World";
    int i, j;

    
    for(i = 0; str1[i] != '\0'; i++);

   
    for(j = 0; str2[j] != '\0';i++) {
        str1[i] = str2[j];
    }

   
    str1[i] = '\0';

    printf("%s", str1);
}

