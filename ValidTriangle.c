#include<stdio.h>
void main()
{
	int a1,a2,a3;
	
	printf("Enter the value of first angle:");
	scanf("%d",&a1);
	
	
	printf("Enter the value of second angle: ");
	scanf("%d",&a2);
	
	
	printf("Enter the value of third angle: ");
	scanf("%d",&a3);
	
	if(a1+a2+a3==180){
		printf("Triangle is valid");
		
	}
	
	else{
		printf("Triangle is not valid");
	}
}
