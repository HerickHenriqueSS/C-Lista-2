#include<stdio.h>

int main(){
    int hourlyWage;
    int workedHours;
    int salary;
    int grossSalary;
    int incomeTax;
    int inss;
    int syndicate;

    printf("Insert to salary per hours: \n");
    scanf("%i", &hourlyWage);
    
    printf("Insert to worked hours: \n");
    scanf("%i", &workedHours);

    grossSalary = hourlyWage * workedHours;

    incomeTax = grossSalary* 0.11;

    inss = grossSalary* 0.08;

    syndicate = grossSalary* 0.05;

    salary = grossSalary-inss-incomeTax-syndicate;

    printf("Gross salary: R$ %i \n", grossSalary);
    printf("Income Tax: R$ %i \n", incomeTax);
    printf("INSS: R$ %i \n", inss);
    printf("Syndicate: R$ %i \n", syndicate);
    printf("Salary: R$ %i \n", salary);

}