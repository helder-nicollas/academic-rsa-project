#include "modular-exponentiation.h"

int modularExponentiation(int base, int expo, int mod) {
    int rest = 1;

    while (expo > 0) {
        if (expo % 2 == 1) {
            rest = (rest * base) % mod;
        }

        base = (base * base) % mod;
        
        expo /= 2;
    }

    return rest;
}