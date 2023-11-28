//

#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Enter a word: ");

    char word[128];
    scanf("%s", word);
    int len = strlen(word);

    for (int i = len; i >= 0; --i)
    {
        printf("%c", word[i]);
    }
    printf("\n");

    return 0;
}