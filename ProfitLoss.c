#include<stdio.h>
void main()
{
	int cp,sp,profit,loss;
	
	printf("Enter cost price:");
	scanf("%d",&cp);
	
	
	printf("Enter sell price:");
	scanf("%d",&sp);
	
/*	profit = sp-cp;
	printf("%d Profit is",profit);
	
	loss =cp-sp;
	printf("%d Loss is",&loss); */
	
	
	if(sp>cp){
		profit = sp-cp;
		printf("Profit is:%d",profit);
}
	
	else if(cp>sp){
		loss = cp-sp;
		printf("Loss is:%d",loss);
}
	else {
		printf("No profit and no loss");
	}		

}
