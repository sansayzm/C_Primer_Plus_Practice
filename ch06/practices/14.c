//

#include <stdio.h>

int main(void)
{
    double arr[8];

    double foldArr[8];

    int count = 0;

    printf("Enter a double number: ");
    do
    {
        int success = 0;
        success = scanf("%lf", &arr[count]);

        // clean buff
        while (getchar() != '\n')
        {
            continue;
        }

        if (success == 1)
        {
            if (count == 0)
            {
                foldArr[count] = arr[count];
            }
            else
            {
                foldArr[count] = arr[count] + foldArr[count - 1];
            }

            count++;
            if (count < 8)
            {
                printf("Please enter next double: ");
            }
        }
        else
        {
            printf("Not a double, try again: ");
        }
    } while (count < 8);

    for (int i = 0; i < 8; i++)
    {
        printf("%-12.4lf ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < 8; i++)
    {
        printf("%-12.4lf ", foldArr[i]);
    }
    printf("\n");

    return 0;
}