//

#include <stdio.h>

int main(void)
{
    char start = 'A';
    for (size_t i = 0; i < 6; i++)
    {
        for (size_t j = 0; j < i + 1; j++)
        {
            printf("%c", start++);
        }
        printf("\n");
    }

    return 0;
}