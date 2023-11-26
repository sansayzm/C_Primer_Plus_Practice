//

#include <stdio.h>

int main(void)
{
    float speed;
    float fileSize;
    printf("Enter your download speed (Mb/s) and file size (Mb): ");
    scanf("%f%f", &speed, &fileSize);

    printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.\n", speed, fileSize, fileSize / speed);

    return 0;
}