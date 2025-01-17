#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	
	printf("Enter your name:");
	gets(str);
	
	printf("%d",strlen(str));
}
