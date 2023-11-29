//

#include <stdio.h>
#include <math.h>

void calc(int times);

int main(void)
{
    int times;

    int count = 0;

    printf("Enter an integer: ");
    do
    {
        count = scanf("%d", &times);

        // clean buff
        while (getchar() != '\n')
        {
            continue;
        }

        if (count != 1)
        {
            printf("Not a integer, try again: ");
        }
        if (count == 1 && times <= 0)
        {
            break;
        }
        else
        {
            calc(times);
        }

    } while (1);

    printf("Done!\n");

    return 0;
}

void calc(int times)
{
    float total1 = 0;
    float total2 = 0;
    for (size_t i = 0; i < times; i++)
    {
        total1 += 1.0 / (1.0 + i);
        if (i == 100 || i == 1000 || i == 10000 || i == 100000 || i == 1000000 || i == 1000000)
        {
            printf("%f\t", total1);
        }
    }
    printf("\n");

    for (size_t i = 0; i < times; i++)
    {
        if (i % 2 == 0)
        {
            total2 += 1.0 / (1.0 + i);
        }
        else
        {
            total2 -= 1.0 / (1.0 + i);
        }
        if (i == 100 || i == 1000 || i == 10000 || i == 100000 || i == 1000000 || i == 1000000)
        {
            printf("%f\t", total2);
        }
    }
    printf("\n");
}