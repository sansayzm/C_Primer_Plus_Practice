//

#include <stdio.h>

#define LCONV 3.785
#define KCONV 1.609

int main(void)
{
    double miles;
    double gallons;

    printf("Enter your miles and gallons: ");
    scanf("%lf%lf", &miles, &gallons);
    double perMiles = gallons / miles;
    printf("Gallons per miles: %.1lf\n", perMiles);

    double lpk = (gallons * LCONV) / (gallons * KCONV) * 100;
    printf("L per 100 KM: %.1lf\n", lpk);

    return 0;
}