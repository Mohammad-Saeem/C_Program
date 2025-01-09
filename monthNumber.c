#include<stdio.h>
void main()
{
	int monthNumber;
	
	printf("Enter the monthn number:");
	scanf("%d",&monthNumber);
	
	switch (monthNumber){
		
		case 1:
			printf("Jan \n");
			printf("Days=31");
			break;
			
	
		case 2:
			printf("Feb \n");
			printf("Days=28or29");
			break;
			
		
		case 3:
			printf("Mar\n");
			printf("Days=31");
			break;
		
		case 4:
			printf("April\n");
			printf("Days=30");
			break;
			
		
		case 5:
			printf("May\n");
			printf("Days=31");
			break;
			
		
		case 6:
			printf("June\n");
			printf("Days=30");
			break;	
		
		case 7:
			printf("July\n");
			printf("Days=31");
			break;
		
		case 8:
			printf("Aug\n");
			printf("Days=31");
			break;
		
		case 9:
			printf("Sept\n");
			printf("Days=30");
			break;
		
		case 10:
			printf("Oct\n");
			printf("Days=31");
			break;
		
		case 11:
			printf("Nov\n");
			printf("Days=30");
			break;
		
		case 12:
			printf("Dec \n");
			printf("Days=31");
			break;
		
		
}
}
