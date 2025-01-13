#include<stdio.h>
void main()
{
	int i,cube,n;
	printf("Enter the number:");
	scanf("%d",&n);
    	
	while(i<=n){
		cube=i*i*i;
		printf("%d \n",cube);
		i++;
	}
	
}
