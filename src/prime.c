#include "stdio.h"
#include "math.h"

int isPrime(long long int x) {
    if (x < 2) return 0;
    if (x == 2) return 1;
    if (x % 2 == 0) return 0;

    for (long long int i = 3; i * i <= x; i += 2) {
        if (x % i == 0)
            return 0;
    }

    return 1;
}
