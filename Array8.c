//Q.8 Write a program in C to copy the elements of one array into another array.

#include<stdio.h>
void main()
{
	int a[5] ={1,2,3,4,5},i;
	int newArr[5];
	
	for(i=0;i<5;i++){
		newArr[i]=a[i];
		
	}
	
	for(i=0;i<5;i++){
		printf("%d ",newArr[i]);
	}
	
}
