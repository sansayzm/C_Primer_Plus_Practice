//

#include <stdio.h>

int main(void)
{
    int arr[8];

    int count = 0;

    printf("Enter a int number: ");
    do
    {
        int success = 0;
        success = scanf("%d", &arr[count]);

        // clean buff
        while (getchar() != '\n')
        {
            continue;
        }

        if (success == 1)
        {
            count++;
            if (count < 8)
            {
                printf("Please enter next int: ");
            }
        }
        else
        {
            printf("Not a int, try again: ");
        }
    } while (count < 8);

    for (int i = 7; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}