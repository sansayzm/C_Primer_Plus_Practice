// 5.13

#include <stdio.h>

void Temperatures(double);

int main(void)
{
    double d = 0;
    int count = 1;

    while (count == 1)
    {
        printf("Enter a fahrenheit temperature: ");

        count = scanf("%lf", &d);
        if (count != 1)
        {
            return 0;
        }

        Temperatures(d);
    }
}

void Temperatures(double v)
{
    double c = 5.0 / 9.0 * (v - 32.0);
    printf("F: %0.2f    K: %0.2f    C: %0.2f\n", v, c + 237.16, c);
}