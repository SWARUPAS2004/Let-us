//Ramesh's basic salary is input through the keyboard.
//His dearness allowance is 40% of basic salary,house rent allowance is 20% of basic salary,
//house rent allowance is 20% of basic salary.Write a program to calculate his gross salary.
#include <stdio.h>
int main()
{
   int basic_salary, dearness_allowance, house_rent,gross_salary;
   printf("Ramesh's basic salary:");
   scanf("%d",&basic_salary);
   dearness_allowance=0.4*basic_salary;
   house_rent=0.2*basic_salary;
   gross_salary= basic_salary +dearness_allowance +house_rent;
   printf("Ramesh Gross Salary: %d",gross_salary);
   return (0);
}
// Ramesh's basic salary:50000
// Ramesh Gross Salary: 80000