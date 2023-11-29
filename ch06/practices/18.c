#include <stdio.h>

int main() {
    int friends = 5;
    int week = 1;
    int dunbars_number = 150;

    while (friends <= dunbars_number) {
        printf("week %d  friends：%d\n", week, friends);
        friends = friends - week;
        friends = friends * 2;
        week++;
    }

    return 0;
}