//6. Write a program in C to display the cube of the number up to an integer.

#include<stdio.h>
void main()
{
	int i=1,cube,num;
	printf("Enter the number");
	scanf("%d",&num);
	do{
		cube=i*i*i;
		printf("%d \n",cube);
		i++;
	}while(i<=num);
}
