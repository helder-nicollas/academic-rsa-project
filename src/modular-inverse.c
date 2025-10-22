#include "modular-inverse.h"
#include "extended-euclides.h" 

int modularInverse(int a, int m) {
    int s, t;
    int mdc = extendedEuclides(a, m, &s, &t);

    if (mdc != 1) {
        return -1;
    }

    int inverse = (s % m + m) % m;

    if (inverse == 0) {
        return m;
    }

    return inverse;
}