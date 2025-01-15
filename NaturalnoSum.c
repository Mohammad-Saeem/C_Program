//4.Write a program in C to display n terms of natural numbers and their sum.

#include<stdio.h>
void main()
{
	int n=1,sum=0,num;
	printf("enter the number");
	scanf("%d",&num);
	
	do{
		printf("%d \n",n);
	    sum=sum+n;
		n++;
		
	 }while(n<=num);
	printf("The sum is %d \n",sum);
}
