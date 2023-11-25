//

#include <stdio.h>

int main(void)
{
    printf("Enter your height: ");
    int height;
    scanf("%d", &height);
    printf("\nYour height is %d cm\n", (int)(2.54 * height));

    return 0;
}