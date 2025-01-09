#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("Enter the value of x:");
	scanf("%d",&a);
	
	
	printf("Enter the value of y:");
	scanf("%d",&b);
	
	
	printf("Enter the value of z:");
	scanf("%d",&c);
	
	if(a>b&&a>c){
		printf("a is maximum");
	}
	
	else if(b>a&&b>c){
		
		printf("%d is maximum",b);
		
	}
	
	
	else if(c>a&&c>b){
		
		printf("%d is maximum",c);
		
	}
	
	else{
		printf("%d %d %d are equal",a,b,c);
	}
}
