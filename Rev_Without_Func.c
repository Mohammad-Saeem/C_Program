#include<stdio.h>
void main()
{
	char str[]="Saeem";
    int length=0,i;	
	for(i = 0; str[i] != '\0'; i++) {
        length=length+1;
    }
    
    for(i=length-1;i>=0;i--){
    	printf("%c",str[i]);
	}

}
