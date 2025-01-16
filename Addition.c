//Addition of two matrices:

#include<stdio.h>
void main()
{
	int A[2][2] = {{1,2},{3,4}};
	int B[2][2]={{7,8},{5,6}},i,j;
	int sum[2][2];
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			
			sum[i][j] = A[i][j]+B[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",sum[i][j]);
		}
		
		printf("\n");
	}
}
