//Addition of two numbers using pointer.
#include<stdio.h>
void main()
{
	int a = 5;
	int b = 8;
	int c;
	int *ptr1=&a;
	int *ptr2=&b;
	int *ptr3=&c;
	
	*ptr3= *ptr1 + *ptr2;
	printf("The sum of %d and %d is %d",*ptr1,*ptr2,*ptr3);
		
	
	}
