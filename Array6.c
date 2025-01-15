//Q.6 Write a program in C to read n number of values in an array and display them in reverse order.

#include<stdio.h>
void main()
{
	int a[3]={3,2,1},i,j;
	
	for(i=2;i>=0;i--){
		printf("%d",a[i]);
	}
}
