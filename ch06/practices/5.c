//

#include <stdio.h>

int main(void)
{
    printf("Enter a Uppercase char (or other to quit): ");
    char centerChar;
    int count = scanf("%c", &centerChar);
    if (centerChar <= 'A' || centerChar >= 'Z')
    {
        return 0;
    }

    short lines = centerChar - 'A' + 1; // lines count
    char start = 'A';
    for (short i = 0; i < lines; i++)
    {
        // Increasing chars
        for (short j = 0; j < i + 1; j++)
        {
            printf("%c", start + j);
        }

        // Decreasing chars
        char midlle = start + i - 1; // middlle char
        for (short j = 0; j < i; j++)
        {
            printf("%c", midlle - j);
        }

        printf("\n");
    }

    return 0;
}