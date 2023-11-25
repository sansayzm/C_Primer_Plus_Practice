// hexadecimal octal decimal

#include <stdio.h>

int main(void)
{
    int x = 100;
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);

    // show coresponding prefix
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

    return 0;
}