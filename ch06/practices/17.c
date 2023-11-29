#include <stdio.h>

int main()
{
    double balance = 1000000;
    double interestRate = 0.08;
    double withdrawalAmount = 100000;
    int years = 0;

    while (balance > 0)
    {
        balance -= withdrawalAmount;
        balance += balance * interestRate;
        years++;
    }

    printf("After %d years.\n", years);

    return 0;
}