// user interaction demo

#include <stdio.h>
#include <string.h> // for strlen() prototype

#define DENSITY 62.4 // Human body density (pounds / cubic feet)

int main(void)
{
    float weight, volume;
    int size, letters;
    char name[40]; // an array for char, can hold 40 chars

    printf("Hi! What's your first name?\n");
    scanf("%s", name); // no need use &name

    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);

    size = sizeof name;
    letters = strlen(name);

    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);

    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.\n", size);

    return 0;
}