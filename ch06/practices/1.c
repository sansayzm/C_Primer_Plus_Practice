//

#include <stdio.h>

#define ALPHABET_SIZE 26

int main(void)
{
    char alphabet[ALPHABET_SIZE];

    char start = 'a';

    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        alphabet[i] = start + i;

        printf("%c ", alphabet[i]);
    }
    printf("\n");

    return 0;
}