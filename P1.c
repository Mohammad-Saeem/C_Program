#include<stdio.h>
void main()
{
	int a[5];
	int i;
	printf("Enter array element");
	
	for(i=0;i<5;i++){
		printf("Enter Number");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++){
		printf(" %d ",a[i]);
	}
}
