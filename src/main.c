#include <stdio.h>
#include <math.h>
#include "types.h"

int main() {
    char message[1000];
    
    scanf("%s", message);


    int array[3] = {23, 32, 23};
    encrypt(message, 7, 35);
    decrypt(array, 7, 35, 24, 3);

    return 0;
}
