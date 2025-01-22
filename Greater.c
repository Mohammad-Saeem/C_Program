//find maximum between two numbers using pointers
#include<stdio.h>
void main(){
	
	int a,b;
    
    printf("Enter the value of a:");
    scanf("%d",&a);
      printf("Enter the value of b:");
    scanf("%d",&b);
    
    int *p1 = &a, *p2=&b;
    
    if(*p1 > *p2){
    	printf("a is greater");
    	
	}
	else{
		printf("b is greater");
	}
}
