#include<stdio.h>
void main()

{
    float a,b;
	float pi = 3.14;
	float area;
	
	
	printf("Enter value of semi-major axis:");
	scanf("%f",&a);
	
	printf("Enter value of semi-minor axis:");
	scanf("%f",&b);
	
	area = pi*a*b;
	
	printf("The area of Ellipse is:%f",area);
}
