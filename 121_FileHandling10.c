// total file content ko read krne k liye using fgets
#include <stdio.h>
int main()
{
    FILE *p;
    char text[300];
    p = fopen("fh10.txt", "r");
    fgets(text, 200, p);
    while ((fgets(text, 200, p)) != NULL)
    {
        printf("%s", text);
    }
    fclose(p);

    return 0;
}
