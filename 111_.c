#include<stdio.h>

union employee
{
    int emp_code;
    char emp_name[100];
    float emp_salary;
};

int main()
{
    union employee a;

    printf("\n Enter the employee code: ");
    scanf("%d", &a.emp_code);
        printf("\n ID = %d", a.emp_code);
    getchar();

    printf("\n Enter the employee name: ");
    gets(a.emp_name);
    printf("\n NAME = %s", a.emp_name);

    printf("\n Enter the employee salary: ");
    scanf("%f", &a.emp_salary);
    printf("\n SALARY = %f", a.emp_salary);
    printf("\n------------------------------------------------------------");
    return 0;
}