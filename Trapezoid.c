#include<stdio.h>
int main()

{
   float b1,b2,h;
   float area;
   
   
   printf("Enter the base1");
   scanf("%f",&b1);

   printf("Enter the base2");
   scanf("%f",&b2);
   
   printf("Enter the height");
   scanf("%f",&h);
   
   area= (0.5)*((b1+b2)*h);
   
   printf("Area is %f",area);
   
   
}
