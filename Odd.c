#include<stdio.h>
void main()
{
	int i=1,n,odd;
	printf("Enter the number till what you want odd numtural number:");
	scanf("%d",&n);
	
	while(i<=n){
		if(i%2!=0){
			printf("%d \n",i);
		}
		i++;
	}
	
	
}
