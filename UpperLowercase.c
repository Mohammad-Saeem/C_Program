#include<stdio.h>
void main()
{
	char ch;
	
	printf("Enter the Character:");
	scanf("%c",&ch);
	
	if(ch>='a'&&ch<='z'){
		printf("%c is in lower case",ch);
	}
	
	else{
		printf("%c is in Upper case",ch);
	}
	
}
