#include "modular-exponentiation.h"

long long modularExponentiation(long long base, long long expo, long long mod) {
    long long rest = 1;

    while (expo > 0) {
        if (expo % 2 == 1) {
            rest = (rest * base) % mod;
        }

        base = (base * base) % mod;
        
        expo /= 2;
    }

    return rest;
}