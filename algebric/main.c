#include <stdio.h>

long long main() {
    
    //Algebric representation of Euclides Algorithmic Extendend
    long long a, b, d, D, mdc, q

    //MDC (a, b) = mdc = a * x + b * y

    //D = Dividend 
    //q = Quotient
    //d = Divider
    //r = Rest

    //There is an array for each element from a division

    while r[n + 1] != 0 ... 

    D[0] = q[0] * d[0] + r[0] //a 
    r[0] = -q[0] * d[0] + D[0] //rest a

    D[1] = q[1] * d[1] + r[1] //b
    r[1] = -q[1] * d[1] + D[1] //rest b

    D[n] =  q[n] * d[n] + r[n] //for all 
    r[n] = -q[n] * d[n] + D[n]

    
    //mdc
    r[max - 1] = mdc

    //Substitutions 
    mdc = -q[max - 1] * d[max - 1] + D[max - 1]
    mdc = -q[max - 1] * (-q[max-2] * d[max-2] + D[max-2]) + D[max - 1]
    mdc = (-q[max - 1] * -q[max-2]) * d[max-2] + -q[max - 1] * D[max-2] + D[max-1]
    ...
    //maybe if we treating d[max-1] like an string ? an array? i dont know


    return 0; 
}