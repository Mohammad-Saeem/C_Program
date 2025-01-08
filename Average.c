#include<stdio.h>
int main()
{
	float w1,w2;
	float p1,p2;
	float avg;
	
	printf("Enter the weights :");
	scanf("%f%f",&w1,&w2);
	
	printf("Enter the price :");
	scanf("%f%f",&p1,&p2);
	
	avg = (p1 * w1 + p2 * w2) /2;
	
	printf(" Average is:%f",avg);
}
