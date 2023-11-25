// The error has been removed.

#include <stdio.h>

int main(void)
{
    int cows, legs; // var should have a type

    printf("How many cow legs did you count?\n"); // a string should be enclosed
    scanf("%d", &legs);                            // for int should be %d, for input value should be &legs
    cows = legs / 4;
    printf("That implies there are %d cows.\n", cows); // for int should be %d

    return 0;
}