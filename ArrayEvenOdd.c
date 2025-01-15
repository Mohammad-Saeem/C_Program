#include<stdio.h>
void main()
{
	int a[8] = {1,5,8,3,4,7,9,2};
	int even[8],odd[8],i;
	
	for(i=0;i<8;i++){
		if(a[i]%2==0){
		even[i]=a[i];	
		}

	}
	
	for(i=0;i<8;i++){
		if(a[i]%2!=0){
			odd[i]=a[i];
		}
	}
			for(i=0;i<8;i++)	{
				printf("%d",even[i]);
				
			}
			for(i=0;i<8;i++){
			
			printf("%d",odd[i]);
}
	}
	
	
	

