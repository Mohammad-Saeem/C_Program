#include<stdio.h>
#include<string.h>
void main()
{
    char str1[]="Hello";
	char str2[10];
	//str2 = strcpy(str1);
	strcpy(str2,str1);
	
	printf("%s",str2);
}
