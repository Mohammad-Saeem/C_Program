#include<stdio.h>
void main()
{
	int s1,s2,s3;
	
	printf("Enter first:");
	scanf("%d",&s1);
	
	
	printf("Enter second:");
	scanf("%d",&s2);
	
	
	printf("Enter third:");
	scanf("%d",&s3);
	
	
	if((s1+s2==s3)||(s1+s3==s2)||(s2+s3==s1)){
		printf("Triangle is valid");
		
	}
	else{
		printf("Triangle is not valid");
	}
}
