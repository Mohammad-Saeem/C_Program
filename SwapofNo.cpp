#include<stdio.h>
int main()
{
	int a,b,c;
     
    printf("Enter value of a :");
    scanf("%d",&a);
    
    printf("Enter value of b: ");
    scanf("%d",&b);
     
     c=a;
     a=b;
     b=c;
     
     printf("after swapping value of a is %d and the value of b is %d",a,b);
	    
	    
}
