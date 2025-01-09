#include<stdio.h>
void main()
{
	int a;
	printf("Enter the number :");
	scanf("%d",a);
	
	if(a>>0) {
		
	printf("%d a is a positive number",a);
	
	}
	
	else if(a<0){
		
		printf("%d a is negative number",a);
	}
	
	else {
		
		("a is zero");
	}
}
