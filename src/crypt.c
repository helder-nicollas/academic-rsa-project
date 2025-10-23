#include "hash-map.h"
#include "letters.h"
#include "modular-exponentiation.h"
#include "decimal-to-binary.h"
#include "stdio.h"
#include "string.h"

int encrypt(char *message, int e, int n) {
    HashMap *map = createHashMap(LETTERS_SIZE);
    initializeLettersMap(map);
    size_t size = strlen(message);
    
    int counter = 0;
    
    while (counter < size) {
        int letterNumber = getHasMapItem(map, message[counter]);
        int cryptNumber = modularExponentiation(letterNumber, e, n);
        printf("%d", cryptNumber);
        counter++;
    }
}