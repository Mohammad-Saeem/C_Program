//Q.7 Write a program in C to find the sum of all elements of the array.

#include<stdio.h>
void main()
{
	int a[5]={1,5,6,3,7},i,j,sum=0;
	
	for(i=0;i<5;i++){
		sum=sum+a[i];
	}
	printf("%d",sum);
}
