//

#include <stdio.h>

int main(void)
{
    printf("Please input a ascii code, for example 66: \n");
    short code;
    scanf("%hd",&code);
    printf("\nIt's coresponding char: %c\n", code);

    return 0;
}