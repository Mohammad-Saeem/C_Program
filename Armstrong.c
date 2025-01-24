// 5.Write a program in C to check Armstrong number.

#include<stdio.h>

void armstrong(){
    int num,rem ,org , sum =0;
    printf("Enter number  to check if the number is Armstrong:-");
    scanf("%d",&num);

    org =num;

while (num!=0){
 rem =num % 10;
 sum = sum + rem* rem* rem ;
 num =num / 10;
}

if(org ==sum){
   printf("the number is armstrong%d", sum);
}else{
     printf("the number is not armstrong",org);
}


}
void main(){
armstrong();
}



