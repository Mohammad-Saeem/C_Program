#include<stdio.h>
void main()
{
	int Physics,Chemistry,Biology,Mathematics,Computer;
	float total_obtain_marks;
	float percentage;
	
	printf("Enter Physics marks:");
	scanf("%d",&Physics);
	
	printf("Enter Chemistry marks:");
	scanf("%d",&Chemistry);
	
	printf("Enter Biology marks:");
	scanf("%d",&Biology);
	
	printf("Enter Mathematics marks:");
	scanf("%d",&Mathematics);
	
	printf("Enter Computer marks:");
	scanf("%d",&Computer);
	
	total_obtain_marks=Physics+Chemistry+Biology+Mathematics+Computer;
	printf("%f \n",total_obtain_marks);
	
/*	percentage =total_obtain_marks/500*100;
	printf("Percentage:%.2f%%",percentage); */
	
	percentage = total_obtain_marks / 500 * 100;
	printf("Percentage: %.2f%%", percentage);

	 
}
