//

#include <stdio.h>
#include <stdlib.h>

int power(int base, int n);

int main(void)
{
    int arr[8];
    for (size_t i = 0; i < 8; i++)
    {
        arr[i] = (int)power(2, i);
    }

    int count = 0;
    do
    {
        printf("%d\t", arr[count]);
        count++;
    } while (count < 8);
    printf("\n");

    return 0;
}

int power(int base, int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= base;
    }
    return result;
}