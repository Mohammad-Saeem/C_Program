#include<stdio.h>

	struct student{
		char name[20];
		int rollno;
		int marks;
	};
	
void main(){
	
	struct student s1;
	printf("Enter details:");
	
	printf("Enter name:");
	scanf("%s",s1.name);
	printf("Enter Rollno:");
	scanf("%d",&s1.rollno);
	printf("Enter Marks:");
	scanf("%d",&s1.name);
	
	printf("Display student details:\n");
	
	printf("name:%s\n",s1.name);
	printf("Rollno:%d\n",s1.rollno);
	printf("Marks:%d\n",s1.marks);
	
	struct student s2;
	
	printf("Enter details:");
	
	printf("Enter name:");
	scanf("%s",s2.name);
	printf("Enter Rollno:");
	scanf("%d",&s2.rollno);
	printf("Enter Marks:");
	scanf("%d",&s2.name);
	
	printf("Display student details:\n");
	
	printf("name:%s\n",s2.name);
	printf("Rollno:%d\n",s2.rollno);
	printf("Marks:%d\n",s2.marks);
	
	

	}  
