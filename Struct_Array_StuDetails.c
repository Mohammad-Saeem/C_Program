//Define a structure to store student details (name, age, and marks), take input from the user, and display the details.
#include<stdio.h>
   struct student{
   	char name[20];
   	int age;
   	int marks;
   	};


void main(){
	
	int i;
	struct student s[3];
	
	printf("Enter Information:");
	
	for(i=0;i<3;i++){
		printf("Enter name:");
		scanf("%s",s[i].name);
	    printf("Enter Age:");
		scanf("%d",&s[i].age);
		printf("Enter marks:");
		scanf("%d",&s[i].marks);
	}
	
	
	printf("Display Informatio:\n");
	
	for(i=0;i<3;i++){
	
	
	printf("Name:%s\n",s[i].name);
	printf("Age:%d\n",s[i].age);
	printf("Marks:%d\n",s[i].marks);
}
}
