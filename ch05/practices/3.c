//

#include <stdio.h>

const int CONWEEK = 7;

int main(void)
{

    int days;
    do
    {
        printf("Enter total days: ");

        scanf("%d", &days);

        if (days <= 0)
            break;

        int week = days / CONWEEK;
        int remainder = days % CONWEEK;

        printf("%d days are %d weeks,%d days\n", days, week, remainder);
    } while (days > 0);

    return 0;
}