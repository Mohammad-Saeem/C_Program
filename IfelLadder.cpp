#include<stdio.h>
int main()
{
 int marks;
 
 printf("Enter your marks");
 scanf("%d",&marks);
 
 
 if(marks>=80){
 	printf("A grade");
 }	
 else if(marks>=50& marks<80){
 	 printf("B grade");
 
 }
 
 else{
 	printf("C grade");
 }
}
