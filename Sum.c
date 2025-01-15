//3 Display the sum of first 10 natural numbers

#include<stdio.h>
void main()
{
	int n=1,sum =0;
	do{
		sum =sum+n;
		//printf("%d",sum);
		n++;
	}while(n<=10);
	printf("%d",sum);
}
