#include<stdio.h>
int main()
{
	int x,y;
	
	printf("Enter the value of x :");
	scanf("%d",&x);
	
	
	printf("Enter the value of y :");
	scanf("%d",&y);
	
    if (x>y){
    	printf(" %d is maximum",x);
	}
	
    else if (y>x){
		printf("%d is maximum",y);
	}
	
	else{
		printf("%d %d both are same",x,y);
	}
}
