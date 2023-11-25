//

#include <stdio.h>

int main(void)
{
    printf("Enter your age: ");
    long age;
    scanf("%ld", &age);
    printf("\nTotal seconds: %ld\n", age * 31560000);

    return 0;
}