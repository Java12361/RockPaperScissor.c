#include <stdio.h>

int main() {
    int a;
    double b;
    char c;
    int arr[10];

    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of double: %zu bytes\n", sizeof(b));
    printf("Size of char: %zu byte\n", sizeof(c));
    printf("Size of int array with 10 elements: %zu bytes\n", sizeof(arr));

    return 0;
}
