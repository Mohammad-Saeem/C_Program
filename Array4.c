//Q.4 Write a program in C to sort elements of an array in ascending order.

#include<stdio.h>
void main()
{
	int a[3] = {2,1,3},i,j,temp;
	
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			
			if(a[i]>a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i=0;i<3;i++){
		printf("%d",a[i]);
	}
}
