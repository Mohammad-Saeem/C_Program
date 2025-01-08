#include<stdio.h>
void main()
{
	int inputDays,Rdays,years,weeks,days;
	
	printf("Enter Days");
	scanf("%d",&inputDays);
	
	years = inputDays/365;
	Rdays= inputDays%365;
	weeks = Rdays/7;
	days = Rdays%7;
	
	printf("Years :%d \n",years );
    printf("Weeks :%d \n",weeks);
	printf("Days :%d",days);	
}
