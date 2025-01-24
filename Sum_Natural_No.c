//9.write a c program to find sum of first n natural numbers using function.

#include<stdio.h>

Sum_Natural_No(){      
	int n,sum=0,i;
	
	printf("Enter the number till you want sum:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum = sum+i;
	}
	
	printf("%d",sum);
	
}

void main()
 {
 	
 Sum_Natural_No();
}

