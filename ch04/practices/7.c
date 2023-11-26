//

#include <stdio.h>
#include <float.h>

int main(void)
{
    double d = 1.0 / 3.0;
    float f = 1.0 / 3.0;

    printf("Double %.6f %.12f %.16f\n", d, d, d);
    printf("Float %.6f %.12f %.16f\n", f, f, f);

    printf("FLT_DIG %d,\tDBL_DIG %d\n", FLT_DIG, DBL_DIG);

    return 0;
}