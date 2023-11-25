//

#include <stdio.h>

int main(void)
{
    printf("Enter a floating-point value: ");

    float input;
    scanf("%f", &input);
    
    printf("\nfixed-point notation: %.6f\n", input);
    printf("exponential notation: %.6e\n", input);
    printf("p notation: %a\n", input);

    return 0;
}