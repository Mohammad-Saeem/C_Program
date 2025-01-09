#include<stdio.h>
void main()
{
	char ch;
	
	printf("Enter the alphabet:");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		
		printf("%c is a vowel",ch);
	}
	else {
		
		printf("%c is a consonent",ch);
	} 
	
	}
