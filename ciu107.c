#include<stdio.h>


struct employee
{
    int emp_code;
    char emp_name[100];
    char emp_desig[100];
    float emp_salary;
};

int main()
{
    struct employee a;

    printf("\n Enter the employee code: ");
    scanf("%d", &a.emp_code);
    getchar();

    printf("\n Enter the employee name: ");
    gets(a.emp_name);

    printf("\n Enter the employee designation: ");
    gets(a.emp_desig);

    printf("\n Enter the employee salary: ");
    scanf("%f", &a.emp_salary);
    printf("\n------------------------------------------------------------");
    printf("\n ID = %d", a.emp_code);
    printf("\n NAME = %s", a.emp_name);
    printf("\n DESIGNATION = %s", a.emp_desig);
    printf("\n SALARY = %f", a.emp_salary);

    return 0;
}