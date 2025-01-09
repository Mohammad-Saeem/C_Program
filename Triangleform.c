#include<stdio.h>
void main()
{
	int s1,s2,s3;
	
	printf("Enter first side:");
	scanf("%d",&s1);
	
	
	printf("Enter second side:");
	scanf("%d",&s2);
	
	
	printf("Enter third side:");
	scanf("%d",&s3);
	
	if((s1==s2)&&(s2==s3)&&(s1==s3)){
		printf("Its a Equilateral triangle");
	}
	
	else if((s1==s2)||(s2==s3)||(s1==s3)){
		printf("Its a Isosceles triangle");
	}
	if((s1!=s2)&&(s2!=s3)&&(s1!=s3)){
		printf("its a Scalene triangle");
	}
	
}
