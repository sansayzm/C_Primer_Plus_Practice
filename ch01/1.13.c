// 1.13编程练习
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int in;
    printf("Please type a value of inch.\n");
    scanf("%d", &in);
    printf("It's %.2f cm\n", 2.54 * in);

    return 0;
}
