#include "inverse.h"
#include "euclides.h" 

int calcularInversoModular(int a, int m) {
    int s, t;
    int mdc = euclidianoEstendido(a, m, &s, &t);

    if (mdc != 1) {
        return -1;
    }

    int inverso = (s % m + m) % m;

    if (inverso == 0) {
        return m;
    }

    return inverso;
}