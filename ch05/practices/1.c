//

#include <stdio.h>

const int CONS = 60;

int main(void)
{

    int minutes;
    do
    {
        printf("Enter total minutes: ");

        scanf("%d", &minutes);
        if (minutes <= 0)
            break;

        int hours = minutes / CONS;
        int remainder = minutes % CONS;

        printf("The time is %d hours %d minites\n", hours, remainder);
    } while (minutes > 0);

    return 0;
}