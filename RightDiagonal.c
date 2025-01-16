//Write a program in C to find the sum of the right diagonals of a matrix.
#include<stdio.h>
void main()
{
	int A[3][3],i,j,sum=0;
	
	printf("Enter the elements of Array:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&A[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i+j==2){
				sum= sum+A[i][j];
			}
		}
	}
	printf("The sum of right diagonal is :%d",sum);
}
