//

#include <stdio.h>

int main(void)
{
    char firstName[40];
    char lastName[40];

    printf("Enter you first name and laset name: ");
    scanf("%s%s", firstName, lastName);
    printf("Hello %s %s\n", firstName, lastName);

    return 0;
}