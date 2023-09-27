// structure as function argument
// wanr
#include <stdio.h>
struct employe
{
    int Code;
    char Name[50];
    float Salary;

}; // variable name yha bhi define kr skte hai

void display(struct employe);

int main()
{
    struct employe aa;

    printf("\n Enter the employee code: ");
    scanf("%d", &aa.Code);

    getchar();

    printf("\n Enter the employee name: ");
    gets(aa.Name);

    printf("\n Enter the employee salary: ");
    scanf("%f", &aa.Salary);

    display(aa);
    return 0;
}

void display(struct employe x)
// aa me jo v value tha whi copy hoke x me aa gya h
{
    printf("\n------------------------------------------------------------");
    printf("\n ID = %d", x.Code);
    printf("\n NAME = %s", x.Name);
    printf("\n SALARY = %f", x.Salary);
}