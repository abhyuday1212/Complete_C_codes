#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    printf("\n Enter an alphabet :");
    scanf("%c", &c);

    if (isalpha(c))
        printf("The character is an alphabet");
    else
        printf("\n The character is not an Alphabet");

    if (isdigit(c))
        printf("\n The character is a digit");
    else
        printf("\n The character is not a digit");

    if (isalnum(c))
        printf("\n The character is either an alphabet or a digit");
    else
        printf("\n The character is neither an alphabet nor a digit");

    printf("\n The Character is not a upper case alphabet : ");
    printf("\n The Character in lower case alphabet = %c ", tolower(c));
    printf("\n The Character in Upper case alphabet = %c ", toupper(c));

    return 0;
}
