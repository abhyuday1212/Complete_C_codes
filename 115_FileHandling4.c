#include <stdio.h>
int main()
{
    FILE *p;
    p = fopen("fh4.txt", "w");
    int roll_no, marks, choice;
    char name[30];
    if (p == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }
    while (1)
    {
        printf("\n Enter Your Roll_No : ");
        scanf("%d", &roll_no);
        fprintf(p, "Roll_no = %d \n ", roll_no);

        printf("\n Enter the name : ");
        scanf("%s", &name);
        fprintf(p, "Name = %s \n", name);

        getchar();

        printf("Enter Your Marks : ");
        scanf("%d", &marks);
        fprintf(p, "Marks = %d \n ", marks);

        printf("Enter More records \n");
        printf("Click '1' to add more records \n");
        printf("Click '2' to exit \n");
        scanf("%d", &choice);
        if (choice == 2)
            break;
    }
    fclose(p);

    printf("File is created successfully");
    return 0;
}
