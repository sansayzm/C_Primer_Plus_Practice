// arguments error

#include <stdio.h>

int main(void)
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;

    printf("%d\n", n, m);    // too much
    printf("%d %d %d\n", n); // too little
    printf("%d %d\n", f, g); // wrong type

    return 0;
}