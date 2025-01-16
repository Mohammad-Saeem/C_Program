//Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
void main()
{
	int A[2][2],i,j,Transpose[2][2];
	
	printf("Enter the element of matrix");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&A[i][j]);
		}
		
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			Transpose[j][i]=A[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",Transpose[i][j]);
		}
		printf("\n");
	}
	
}
