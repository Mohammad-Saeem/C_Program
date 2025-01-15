#include<stdio.h>
void main()
{
	int i=1,j;
	while(i<=4){
		j=1;
		while(j<=i){
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}
