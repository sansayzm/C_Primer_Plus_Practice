// 有逻辑错误的程序 已修正
#include <stdio.h>

int main(void){
    int n, n2, n3;
    n = 5;
    n2 = n * n;
    n3 = n2 * n; // here

    printf("n = %d, n square = %d, n cubed = %d\n", n, n2, n3);

    return 0;
}
