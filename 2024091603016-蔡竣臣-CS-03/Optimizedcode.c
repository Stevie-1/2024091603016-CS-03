#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int n);

int main() {
    int m, n;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &m, &n) != 2 || m <= 0 || m >= 2147483648 || n <= 0 || n >= 2147483648) {
        fprintf(stderr, "Invalid input. Please enter two positive integers.\n");
        return 1;
    }

    int result = gcd(m, n);
    printf("Greatest common divisor: %d\n", result);

    return 0;
}

int gcd(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}