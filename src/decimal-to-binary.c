#include "types/decimal-to-binary.h"

int decimalToBinary(unsigned long long n, int binary[]) {
    int i = 0;
    int temp_binary[128]; 

    if (n == 0) {
        binary[0] = 0;
        return 1;
    }

    while (n > 0) {
        temp_binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = 0; j < i; j++) {
        binary[j] = temp_binary[i - 1 - j];
    }

    return i;
}