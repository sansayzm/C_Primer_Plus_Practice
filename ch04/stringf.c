//

#include <stdio.h>

#define BLURB "Authentic imitation!"

int main(void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB); // only print 5 chars
    printf("[%-24.5s]\n", BLURB);

    return 0;
}