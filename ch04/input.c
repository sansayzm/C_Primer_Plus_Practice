// 4.15

#include <stdio.h>

int main(void)
{
    int age;
    float assets;
    char pet[30];

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);

    scanf("%s", pet); // do not use & for array
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}