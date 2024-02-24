#include <stdio.h>

int main() {
    int n, i = 2;
    int isPrime = 1; // flag to determine if n is a prime number

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) {
        isPrime = 0; // numbers less than 2 are not prime
    }

    while (i <= n / 2) {
        if (n % i == 0) {
            isPrime = 0;
            break; // no need to continue; n is not prime
        }
        i++;
    }

    if (isPrime) {
        printf("Result: %d is a prime number.\n", n);
    } else {
        printf("Result: %d is NOT a prime number.\n", n);
    }

    return 0;
}
