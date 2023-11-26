// 5.13

#include <stdio.h>

int main(void)
{
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    int divsor, divident;
    scanf("%d", &divsor);

    printf("Now enter the first operand: ");
    scanf("%d", &divident);
    printf("%d %% %d is %d\n", divident, divsor, divident % divsor);

    while (divident > 0)
    {
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &divident);

        printf("%d %% %d is %d\n", divident, divsor, divident % divsor);
    }

    printf("done!\n");

    return 0;
}