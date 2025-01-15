// Write a program in C to store elements in an array and print them.

#include<stdio.h>
void main()
{
	int a[5];
	int i;

	
	for(i=0;i<5;i++){
	printf("Enter array element:");  
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++){
		printf(" %d ",a[i]);
	}
}
