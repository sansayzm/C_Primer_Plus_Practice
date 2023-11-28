//

#include <stdio.h>

int main(void)
{
    printf("Enter min and max number(int type): ");

    int min, max;
    scanf("%d %d", &min, &max);
    for (int i = min; i <= max; i++)
    {
        printf("%10d%10d%10d\n", i, i * i, i * i * i);
    }

    return 0;
}