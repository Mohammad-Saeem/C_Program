#include<stdio.h>
void main()
{
	int num;
	
	printf("Enter the number :");
	scanf("%d",&num);
	if(num%7==0&&num%11==0){
		
		printf("%d is divisible by 7 and 11",num);
		
	}
	
	else {
		
		printf("%d is not divisible by 7 and 11",num);
	}
}
