#include<stdio.h>
void main()
{
	int i=1,n,even,sum=0;
	printf("Enter the number till what you want even natural number:");
	scanf("%d",&n);
	
	while(i<=n){
		if(i%2==0){
			//printf("%d \n",i);
		}
		i++;
		sum=sum+i;
		
	}
	printf("Sum of even number is:%d",sum);
	
}
