//

#include <stdio.h>
#include <float.h>

int main(void)
{
    printf("int overflow: %d\n", 99999999 * 9999999);
    printf("float overflow: %10f\n", FLT_MAX * 1.1);
    printf("float underflow: %f\n", FLT_MIN * 0.9);

    return 0;
}