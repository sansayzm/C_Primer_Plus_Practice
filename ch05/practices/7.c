// 5.13

#include <stdio.h>

void cube(double);

int main(void)
{
    printf("Enter a double: ");
    double d;
    scanf("%lf", &d);
    cube(d);
}

void cube(double v)
{
    printf("Cube: %lf\n", v * v * v);
}