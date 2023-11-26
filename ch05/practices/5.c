// 5.13

#include <stdio.h>

int main(void)
{
    printf("Enter days: ");
    int count, sum;
    scanf("%d", &count);

    if (count <= 0)
    {
        return 0;
    }

    sum = 0;

    while (count > 0)
        sum = sum + count--;

    printf("sum = %d\n", sum);

    return 0;
}