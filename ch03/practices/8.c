//

#include <stdio.h>

int main(void)
{
    printf("How many cups there are : ");
    int cups;
    scanf("%d", &cups);
    printf("Pints: %0.2f\tOunces: %0.2f\tSoupSpoons: %0.2f\tTeaSpoons: %0.2f\t\n", 0.5 * cups, 8.0 * cups, 8.0 * cups * 2, 8.0 * cups * 2 * 3);

    return 0;
}