
#include <stdio.h>
#include <string.h>

int count = 1;

int main(void)
{
    float da = 100, de = 100;
    float daInc = 0.1, deInc = 0.05;
    float daTotal = 100, deTotal = 100;
    while (1)
    {
        daTotal += da * daInc;
        deTotal += deTotal * deInc;
        count++;

        if (deTotal > daTotal)
        {
            break;
        }
    }

    printf("Daphne:%f\tDeirdre:%f\tYear:%d\t\n", daTotal, deTotal, count);

    return 0;
}