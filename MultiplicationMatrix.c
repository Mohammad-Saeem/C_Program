#include<stdio.h>
void main()
{
	int A[3][3],B[3][3],i,j,k;
	int M[3][3];
	//Code for takiing input and Printing the matrices:
	printf("Enter elements of matrix A:");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&A[i][j]);
			
		}
		
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	printf("Enter elements of matrix B:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&B[i][j]);
			
		}
		
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}
	//Code fo multiplication:
	
	for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            M[i][j] = 0;
        }
    }
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				M[i][j]+= A[i][k]*B[k][j];
			}
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",M[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	 
}
