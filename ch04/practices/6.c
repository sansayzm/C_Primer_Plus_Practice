//

#include <stdio.h>

int main(void)
{
    char firstName[40];
    char lastName[40];

    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lastName);

    int firstLen = strlen(firstName);
    int lastLen = strlen(lastName);

    printf("%s %s\n", firstName, lastName);
    printf("%*d %*d\n", firstLen, firstLen, lastLen, lastLen);

    printf("%s %s\n", firstName, lastName);
    printf("%-*d %-*d\n", firstLen, firstLen, lastLen, lastLen);

    return 0;
}