#include "hash-map.h"
#include "letters.h"
#include "modular-exponentiation.h"
#include "decimal-to-binary.h"
#include "stdio.h"
#include "string.h"
#include "modular-inverse.h"

void encrypt(char *message, int *decryptedDigits, int e, int n) {
    HashMap *map = createHashMap(LETTERS_SIZE);
    initializeLettersMap(map);
    size_t size = strlen(message);
    
    int counter = 0;
    
    while (counter < size) {
        int letterNumber = getHasMapItem(map, message[counter]);
        int cryptNumber = modularExponentiation(letterNumber, e, n);

        decryptedDigits[counter] = cryptNumber;

        counter++;
    }
}

void decrypt(int *cryptedMessage, char *decryptedMessage, int e, int n, int m, int size) {
    HashMap *map = createHashMap(LETTERS_SIZE);
    initializeLettersMap(map);
    int d = modularInverse(e, m);

    int counter = 0;

    while (counter < size) {
        int number = cryptedMessage[counter];
        int originalNumber = modularExponentiation(number, d, n);

        decryptedMessage[counter] = getLetter(originalNumber);

        counter++;
    }

}