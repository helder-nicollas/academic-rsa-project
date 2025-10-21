#include "modular.h"

unsigned long long modularExponentiation(unsigned long long base, unsigned long long mod, int binaryExp[], int size) {
    unsigned long long result = 1;
    base = base % mod;

    for (int i = 0; i < size; i++) {
        result = (result * result) % mod;

        if (binaryExp[i] == 1) {
            result = (result * base) % mod;
        }
    }

    return result;
}