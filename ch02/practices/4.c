#include <stdio.h>

// 原型申明
void jolly();
void deny();

int main(void){
    jolly();
    jolly();
    jolly();

    deny();
    
    return 0;
}

void jolly(){
    printf("For he's a jolly good fellow!\n");
}

void deny(){
    printf("Which nobody can deny!\n");
}