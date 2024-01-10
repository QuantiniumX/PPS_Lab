#include <stdio.h>

long long power(long long a, long long b) {
    if (b == 0) {
        return 1;
    } else if (b % 2 == 0) {
        long long temp = power(a, b / 2);
        return temp * temp;
    } else {
        return a * power(a, b - 1);
    }
}

int main() {
    long long a, b;
    
    printf("Enter base (a): ");
    scanf("%lld", &a);
    printf("Enter exponent (b): ");
    scanf("%lld", &b);

    long long result = power(a, b);

    printf("%lld^%lld = %lld\n", a, b, result);

    return 0;
}

