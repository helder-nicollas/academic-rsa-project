#include <stdio.h>
#include <math.h>
#include "types.h"

int main() {
    char message[1000];

    scanf("%s", message);

    // q = 5 & p =7
    encrypt(message, 7, 35);

    return 0;
}
