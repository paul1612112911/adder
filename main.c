#include <stdio.h>

int add_number(int a, int b){
    return a + b;
}

int sub_number(int a, int b){
    return a - b;
}

int main(){
    printf("=== C Language Calculator ===\n");

    printf("1: add, 2: sub =>");
    int choose;
    scanf("%d", &choose);
    int a, b;
    scanf("%d%d", &a, &b);
    if(choose == 1) printf("%d", add_number(a, b));
    if(choose == 2) printf("%d", sub_number(a, b));

    printf("system checks OK\n");
    return 0;
}