#include <stdio.h>

typedef struct {
    char name[20];
    unsigned int age;
    char address[100];
    char employeeid[20];
    unsigned long long salary;
} person;

int main() {
    person Quant;
    printf("Enter name: ");
    scanf("%s", Quant.name);
    printf("Enter age: ");
    scanf("%u", &Quant.age);
    printf("Enter address: ");
    scanf("%s", Quant.address);
    printf("Enter the employee Id: ");
    scanf("%s", Quant.employeeid);
    printf("Enter Salary: ");
    scanf("%llu", &Quant.salary);

    printf("%s\n", Quant.name);
    printf("%u\n", Quant.age);
    printf("%s\n", Quant.address);
    printf("%s\n", Quant.employeeid);
    printf("%llu\n", Quant.salary);
}
