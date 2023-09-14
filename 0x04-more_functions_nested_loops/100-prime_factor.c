#include <stdio.h>
#include <math.h>

long long findLargestPrimeFactor(long long n) {
    long long largestFactor = -1;

    // Handle divisibility by 2 repeatedly
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }

    // Continue with odd numbers starting from 3
    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }

    // If n is still greater than 1, it is a prime number itself
    if (n > 1) {
        largestFactor = n;
    }

    return largestFactor;
}

int main() {
    long long number = 612852475143;
    long long largestPrimeFactor = findLargestPrimeFactor(number);

    printf("%lld\n", largestPrimeFactor);

    return 0;
}
