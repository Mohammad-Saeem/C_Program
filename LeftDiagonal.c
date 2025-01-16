//Write a program in C to find the sum of the left diagonals of a matrix.
#include<stdio.h>
void main()
{
	int A[3][3], sum=0,i,j;
	
	printf("Enter the elements of the Array:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&A[i][j]);
}
}

     for(i=0;i<3;i++){
     	for(j=0;j<3;j++){
     		if(i==j){
     			sum =sum+A[i][j];
			 }
		 }
	 }
	 printf("%d",sum);

}
