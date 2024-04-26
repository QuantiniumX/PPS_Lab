#include <stdio.h>
#include <string.h>

#define EMPLOYEE_NO 2

typedef struct {
    char name[20];
    unsigned int age;
    char address[100];
    char employeeid[20];
    unsigned long long salary;
} person;

person *calculate_max_age(person employee[EMPLOYEE_NO]) {
    person *maxAgeEmployee = &employee[0];
    for (int i = 1; i < EMPLOYEE_NO; i++) {
        if (employee[i].age > maxAgeEmployee->age) {
            maxAgeEmployee = &employee[i];
        }
    }
    return maxAgeEmployee;
}

person *calculate_max_salary(person employee[EMPLOYEE_NO]) {
    person *maxSalaryEmployee = &employee[0];
    for (int i = 0; i < EMPLOYEE_NO; i++) {
        if (employee[i].salary > maxSalaryEmployee->salary) {
            maxSalaryEmployee = &employee[i];
        }
    }
    return maxSalaryEmployee;
}

int main() {
    person employees[EMPLOYEE_NO];
    for (int i = 0; i < EMPLOYEE_NO; i++) {
        printf("Enter Details of Employee %d\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Enter age: ");
        scanf("%u", &employees[i].age);
        printf("Enter address: ");
        scanf(" %[^\n]", employees[i].address);
        printf("Enter the employee Id: ");
        scanf(" %[^\n]", employees[i].employeeid);
        printf("Enter Salary: ");
        scanf("%llu", &employees[i].salary);
    }

    for (int i = 0; i < EMPLOYEE_NO; i++) {
        printf("\nData for Employee %d: \n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Age: %u\n", employees[i].age);
        printf("Address: %s\n", employees[i].address);
        printf("Employee ID: %s\n", employees[i].employeeid);
        printf("Salary: %llu\n", employees[i].salary);
    }

    person *maxAgeEmployee = calculate_max_age(employees);
    printf("\nEmployee with maximum age: %s\n", maxAgeEmployee->name);

    person *maxSalary = calculate_max_salary(employees);
    printf("\nEmployee with maximum Salary: %s\n", maxSalary->name);

    return 0;
}
