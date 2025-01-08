#include <stdio.h>

int main() 

{
    int id;
    float totalhours, amountperhour, salary;

    
    printf("Enter employee ID: ");
    scanf("%d", &id);

    printf("Enter total hours worked in the month: ");
    scanf("%f", &totalhours);

    printf("Enter amount received per hour: ");
    scanf("%f", &amountperhour);

    
    salary = totalhours * amountperhour;

    printf("Employee ID: %d\n", id);
    printf("Salary for the month: %.2f \n", salary);  
    
	
}


