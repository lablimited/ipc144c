#include <stdio.h>

int main() {

    int x = 25;
    int *ptr;

    ptr = &x;

    printf("\nThe value of x using *ptr is: %d", *ptr);
    printf("\nThe value of x is: %d", x);
    printf("\nMemory Address for ptr: %d" , ptr);

    *ptr = 100;

    printf("\nThe value of x ptr is: %d", *ptr);
    printf("\nThe value of x is: %d", x);
    printf("\nMemory Address for ptr: %d" , ptr);


    return 0;
}