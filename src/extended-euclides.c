#include "extended-euclides.h"

int extendedEuclides(int a, int b, int *s, int *t) {
    if (b == 0) {
        *s = 1;
        *t = 0;
        return a;
    }

    int s1, t1;
    int mdc = extendedEuclides(b, a % b, &s1, &t1);

    *s = t1;
    *t = s1 - (a / b) * t1;

    return mdc;
}
