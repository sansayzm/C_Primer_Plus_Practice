//

#include <stdio.h>

float calc(float num1, float num2);

int main(void)
{
    float num1, num2;

    int count = 0;

    printf("Enter two float number (ex. 2.1 28.0): \n");
    do
    {
        count = scanf("%f %f", &num1, &num2);

        // clean buff
        while (getchar() != '\n')
        {
            continue;
        }

        if (count != 2)
        {
            printf("Please try again!\n");
        }
    } while (count != 2);

    printf("%f\n", calc(num1, num2));

    return 0;
}

float calc(float num1, float num2)
{
    return (num1 - num2) / (num1 * num2);
}