// count total vowels and consonants in a file

#include <stdio.h>
int main()
{
    FILE *p;
    char c;
    int vowel = 0, consonant = 0;

    p = fopen("fh6.txt", "r");
    while (c != EOF)
    {
        c = fgetc(p);
        if ((c >= 'a' && c <= 'z') || (c > 'A' && c < 'Z'))
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
                vowel++;
            else
                consonant++;
        }
    }
    printf(" \n Total Vowels = %d", vowel);
    printf(" \n Total consonant = %d", consonant);
    fclose(p);

    return 0;
}
