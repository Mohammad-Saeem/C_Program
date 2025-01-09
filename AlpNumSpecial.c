#include<stdio.h>
void main()
{
	char ch;
	
	printf("Enter the Character");
	scanf("%c",&ch);
	
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<'Z')){
		printf("%c is a alphabet",ch);
	}
	
	else if (ch>='0'&&ch<='9'){
		printf("%c is a Number",ch);
	}
	
	else {
		printf("Its a special character",ch);
	}
}
