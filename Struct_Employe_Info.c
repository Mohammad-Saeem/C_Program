//2. Create a structure to store an employee's ID, name, and salary, and write a program to print the details.

#include<stdio.h>

struct Employee{
	char name[30];
	int id;
	int salary;
};

void main()
{
	int i;
	struct Employee E[3];
	
	for(i=0;i<3;i++){
		printf("Enter your Details:");
		
		printf("Enter Name:");
		scanf("%s",E[i].name);
		
		printf("Enter Id:");
		scanf("%d",&E[i].id);
		
		printf("Enter salary:");
		scanf("%d",&E[i].salary);
	}
	
	printf("Displayin Employees Information:\n");
	
	for(i=0;i<3;i++){
		printf("Name:%s\n",E[i].name);
		printf("Id:%d\n",E[i].id);
		printf("Salary:%d\n",E[i].salary);
	}
}
