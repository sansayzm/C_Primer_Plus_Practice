//

#include <stdio.h>
#include <string.h>

int main(void)
{
    char firstName[40];
    char lastName[40];

    printf("Enter you first name and laset name: ");
    scanf("%s%s", firstName, lastName);
    printf("\"%18s %s\"\n", lastName, firstName);
    printf("\"%s %-18s\"\n", lastName, firstName);

    int len = strlen(firstName)+ 3;
    printf("\"%*s %s\"\n", len, lastName, firstName);

    return 0;
}