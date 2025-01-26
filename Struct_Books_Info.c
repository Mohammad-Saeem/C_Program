//3. Create an array of structures to store information of 5 books (title, author, price) and display them.

#include<stdio.h>
struct Books{
	char title[20],author[30];
	int price;
};

void main(){
	int i;
	struct Books B[5];
	printf("Enter Details of books:\n");
	for(i=0;i<5;i++){
		printf("Enter Title:");
		scanf("%s",&B[i].title);
		printf("Enter Author Name:");
		scanf("%s",&B[i].author);
		printf("Enter price:");
		scanf("%d",&B[i].price);
	}
	
	printf("Displaying Books Info:\n");
	
	for(i=0;i<5;i++){
		printf("Title:%s\n",B[i].title);
		
		printf("Author:%s\n",B[i].author);
		
		printf("Price:%d\n",B[i].price);
	}
}
