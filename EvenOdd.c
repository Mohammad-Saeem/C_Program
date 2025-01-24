#include<stdio.h>

EvenOdd(){
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	if(num%2==0){
		printf("The number %d is even",num);
	}
	
	else{
		printf("The Number %d is Odd",num);
	}
}

void main(){
	
	EvenOdd();
}
