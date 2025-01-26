//4.Create an array of structure to store  student information and display only those students data who are having phone number with 88 in ending

#include<stdio.h>
#include<string.h>
   struct student{
   	char name[20];
   	int age;
   	int marks;
   	char phoneno[20]; 
   	};


void main(){
	
	int i;
	struct student s[3];
	
	printf("Enter Information:\n");
	
	for(i=0;i<3;i++){
		printf("Enter name:");
		scanf("%s",s[i].name);
	    printf("Enter Age:");
		scanf("%d",&s[i].age);
		printf("Enter marks:");
		scanf("%d",&s[i].marks);
		
		printf("Enter Phoneno:");
	
		scanf("%s",s[i].phoneno);
	
}
	
	printf("Display Informatio:\n");
	
	
	
	for(i=0;i<3;i++){
		int len=strlen(s[i].phoneno);
	if(s[i].phoneno[len-1]=='8'&&s[i].phoneno[len-2]=='8'){
		
	
	printf("Name:%s\n",s[i].name);
	printf("Age:%d\n",s[i].age);
	printf("Marks:%d\n",s[i].marks);
	printf("Phoneno:%s\n",s[i].phoneno);}
}
}
  
