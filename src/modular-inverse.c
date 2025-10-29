#include "modular-inverse.h"
#include "extended-euclides.h" 

long long modularInverse(long long a, long long m) {
    long long s, t;
    long long mdc = extendedEuclides(a, m, &s, &t);

    if (mdc != 1) {
        return -1;
    }

    long long inverse = (s % m + m) % m;

    if (inverse == 0) {
        return m;
    }

    return inverse;
}