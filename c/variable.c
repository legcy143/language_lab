#include <stdio.h>
#include <stdbool.h>

int c = 78;

int main()
{
    short int a1 = 12;
    float a2 = 12.1;
    double a3 = 12.1;
    bool a4 = false;

    printf("Size of int: %lu bytes\n", sizeof(a1));
    printf("Size of float: %lu bytes\n", sizeof(a2));
    printf("Size of double: %lu bytes\n", sizeof(a3));
    printf("Size of bool: %lu bytes\n", sizeof(a4));

    return 0;
}
