#include <stdio.h>

// 原型申明
void br();
void ic();

int main(void){
    br();
    printf("\t"); // 打印制表符
    ic();
    printf("\n"); // 打印换行符

    ic();
    printf("\n"); // 打印换行符

    br();
    printf("\n"); // 打印换行符


    return 0;
}

void br(){
    printf("Brazil, Russia");
}

void ic(){
    printf("India, China");
}