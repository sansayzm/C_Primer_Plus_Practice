#include <stdio.h>
#include <string.h>
char str[256];
char c;
int i = 0;
int main(void)
{
    while ((c = getchar()) != '\n')
    {
        str[i++] = c;
        if (i == 255)
        {
            break;
        }
    }
    str[i] = '\0';
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", str[j]);
    }
    printf("\n");

    return 0;
}