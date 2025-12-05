#include <stdio.h>

int sub_number(int a, int b);
int add_number(int a, int b);

int main() {
    printf("system checks OK\n");
    
    int result_sub = sub_number(50, 30);
    printf("Subtraction: a - b = %d\n", result_sub);
    
    printf("System Check OK\n");
    return 0;
}

int sub_number(int a, int b){
    return a - b;
}

int add_number(int a, int b){
    return a + b;
}