#include "extended-euclides.h"

long long extendedEuclides(long long a, long long b, long long *s, long long *t) {
    if (b == 0) {
        *s = 1;
        *t = 0;
        return a;
    }

    long long s1, t1;
    long long mdc = extendedEuclides(b, a % b, &s1, &t1);

    *s = t1;
    *t = s1 - (a / b) * t1;

    return mdc;
}
