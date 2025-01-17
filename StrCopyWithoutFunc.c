#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="Hello";
	char str2[10];
	int i;
	for(i=0;str1[i]!='\0';i++){
		str2[i]=str1[i];
	}
	str2[i]='\0';
	
	printf("%s",str2);
		
}
