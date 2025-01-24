#include<stdio.h>

square(){
	int num,square;
	
	printf("Enter the number");
	scanf("%d",&num);
	square = num*num;
    printf("%d",square);
}

void main(){
	square();
}
