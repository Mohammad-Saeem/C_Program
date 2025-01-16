#include<stdio.h>
void main()
{
	int A[3][3],B[3][3],i,j,isEqual=1;
	
printf("Enter element of the matrix A");

   for(i=0;i<3;i++){
   	for(j=0;j<3;j++){
   		scanf("%d",&A[i][j]);
	   }
   }
   
   printf("Enter element of the matrix B");

   for(i=0;i<3;i++){
   	for(j=0;j<3;j++){
   		scanf("%d",&B[i][j]);
	   }
	   
}

    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		
			if(A[i][j]!=B[i][j]){
				isEqual=0;
			}
		}
	}
	if(isEqual==1){
		printf("Matrices are equal");
	}
	else{
		printf("Matrices are not equal");
	}
}
