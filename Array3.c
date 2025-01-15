//11.write a c program to create new array from a given array of integers shifting all even numbers before odd numbers.

#include<stdio.h>
void main()
{
	int a[7] = {1,5,7,6,10,8,4},i,k=0;
	int newArr[7];
	
	/*for(i=0;i<7;i++){
		if(a[i]%2!=0){
		newArr[k]=a[i];
		k++;
	}
	}*/
	for(i=0;i<7;i++){
		if(a[i]%2==0){
			newArr[k]=a[i];
			k++;
		}
	}
	for(i=0;i<7;i++){
		if(a[i]%2!=0){
		newArr[k]=a[i];
		k++;
	}
	}
	for(k=0;k<7;k++){
		printf("%d ",newArr[k]);
	}
	
	
}
