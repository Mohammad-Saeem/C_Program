#include<stdio.h>
void main()
{
	int percentage;
	int sum;
	int Hindi,English,Math,Science,Physics;
	
	printf("Enter the marks of Hindi");
	scanf("%d",&Hindi);

    printf("Enter the marks of English");
	scanf("%d",&English);
	
	printf("Enter the marks of Math");
	scanf("%d",&Math);
	
	printf("Enter the marks of Science");
	scanf("%d",&Science);

	printf("Enter the marks of Physics");
	scanf("%d",&Physics);
	
	sum = Hindi+English+Math+Science+Physics;
	
	printf("Sum %d",sum);
	
	percentage = (sum/500)*100;
	
	printf("Percentage is %d",percentage);
	
	
	
}
	
	
	
	
	
	
	
	
	



