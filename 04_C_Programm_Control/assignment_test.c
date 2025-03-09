#include<stdio.h>

int main(void){
    int a;
    int b;

    printf("The memory address of a is: %p\n", (void*)&a);
    printf("The memory address of b is: %p\n", (void*)&b);

    a = 2;
    b = a;
    --a;
    ++b;
    printf("a: %d, b: %d\n", a, b);
}
