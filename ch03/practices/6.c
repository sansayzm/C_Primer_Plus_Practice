//

#include <stdio.h>

int main(void)
{
    printf("Enter the total water (quart): ");
    int q;
    scanf("%d", &q);
    float total = q * 950 * 3.0e23;
    printf("Water molecule counter: %.0f\n", total);

    return 0;
}