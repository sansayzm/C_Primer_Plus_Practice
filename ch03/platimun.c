#include <stdio.h>

int main(void)
{
    float weight; 
    float value;  // Platinum value of equal weight

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    scanf("%f", &weight); // get weight from user type

    // Suppose the price of platinum is $1700 per ounce.
    // Pound to ounce
    value = 1700.0 * weight * 14.5833;

    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    return 0;
}