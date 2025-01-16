// Write a program in C to find the sum of all elements of matrix.
#include<stdio.h>
void main()
{
	int A[3][3],i,j,sum=0;
	
	printf("Enter the element of Matrics");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&A[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum = sum+A[i][j];
		}
	}
	printf("The sum of all element of matrix is:%d",sum);
}
