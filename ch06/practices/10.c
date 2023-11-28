//

#include <stdio.h>

void calc(int num1, int num2);

int main(void)
{
    int num1 = 0, num2 = 0;

    int count = 0;

    printf("Enter lower and upper integer limits: ");
    do
    {
        count = scanf("%d %d", &num1, &num2);

        // clean buff
        while (getchar() != '\n')
        {
            continue;
        }

        if (count == 2 && num1 < num2)
        {
            calc(num1, num2);
            printf("Enter next set of limits: ");
        }
    } while (num1 < num2);

    printf("Done\n");

    return 0;
}

void calc(int num1, int num2)
{
    int sum = 0;
    for (int i = num1; i <= num2; i++)
    {
        sum += i * i;
    }

    printf("The sums of the squares from %d to %d is %d\n", num1 * num1, num2 * num2, sum);
}