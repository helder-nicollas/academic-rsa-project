#include "keys.h"
#include "modular-inverse.h"

SecretKey generateSecretKey(long long p, long long q, long long e) {
    long long number = (p - 1) * (q - 1);
    long long n = p * q;
    long long inverse = modularInverse(e, number);

    return (SecretKey){ n, inverse };
}