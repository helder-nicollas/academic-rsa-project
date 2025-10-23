#include "hash-map.h"


int encrypt(char message[], int e, int n) {
    HashMap *map = createHashMap(LETTERS_SIZE);
    initializeLettersMap(map);
    int letterNumber = getHasMapItem(map, message[0]);

    return letterNumber;
}