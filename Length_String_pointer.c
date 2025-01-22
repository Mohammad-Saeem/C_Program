// 5.Calculate the length of the string. 


#include<stdio.h>




int main(){
    char name[20],*p1;
    int l=0;
    printf("Enter a name:");
    scanf("%s",name);
    for(p1=&name[0];*p1!='\0';p1++){
        l++;
    }
    printf("%d",l);
    }
