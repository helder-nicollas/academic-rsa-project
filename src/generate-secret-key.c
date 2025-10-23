#include "keys.h"
#include "modular-inverse.h"

SecretKey generateSecretKey(int p, int q, int e) {
    int number = (p - 1) * (q - 1);
    int n = p * q;
    int inverse = modularInverse(e, number);

    return (SecretKey){ n, inverse };
}