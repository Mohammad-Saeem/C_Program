//Q.9 Write a program in C to maximum element.

#include<stdio.h>
void main()
{


int a[3]={5,2,8};
int i,j,max=0;

    for(i=0;i<3;i++){
    	if(a[i]>max){
    		max=a[i];
		}
	}
printf("%d",max);

}
