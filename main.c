#include <stdio.h>
#include <math.h>

typedef Rest struct {
    int value;
    int q;
    int d;
    int D;
} Rest;


typedef EuclidesDivisionItem struct {
    Rest r;
    int q;
    int d;
    int D;
} Rest;

// 36 = 1*25+11
// 25 = 2*11+3
// 11 = 3*3+2
// 3 = 1*2+1
// 2 = 1*2+0


// 11 = -1*25+36
// 3 = -2*11+25
// 2 = -3*3+11
// 1 = -1*2+3


/*
    Linear Combination
    1 = -1*2+3
    1 = -1*(-3*3+11)+3
    1 = 3*3-11+3*1
    1 = 4*3-1*11
    1 = 4*(-2*11+25)-1*11
    1 = -8*11+25*4-1*11
    1 = -9*11+4*25
    1 = -9*(-1*25+36)+4*25
    1 = 9*25-9*36+4*25
    1 = 13*25-9*36
    1 = 13*25-9*36


    Somar os coeficientes e substituir o próximo
    ax+my=c
*/ 





int main() {
    EuclidesDivisionItem array[10];

    array[0].r.value

    36x+25y=1




    return 0;
}
