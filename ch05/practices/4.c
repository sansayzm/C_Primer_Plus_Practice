//

#include <stdio.h>

int main(void)
{

    float height;
    do
    {
        printf("Enter a height in centimeters: ");

        scanf("%f", &height);

        if (height <= 0)
            break;

        printf("%.1f cm = %.1f feet, %.1f inches\n", height, height * 0.3937, height * 0.0328);
    } while (height > 0);

    return 0;
}