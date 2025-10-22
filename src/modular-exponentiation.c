#include "modular-exponentiation.h"

int modularExponentiation(int base, int mod, int binaryExp[], int size) {
    int result = 1;
    base = base % mod;

    for (int i = 0; i < size; i++) {
        result = (result * result) % mod;

        if (binaryExp[i] == 1) {
            result = (result * base) % mod;
        }
    }

    return result;
}