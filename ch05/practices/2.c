//

#include <stdio.h>

int main(void)
{
    printf("Enter a int: ");
    int num;
    scanf("%d", &num);
    int stop = num + 10;

    while (num <= stop)
    {
        printf("%d\t", num++);
    }
    printf("\n");

    return 0;
}