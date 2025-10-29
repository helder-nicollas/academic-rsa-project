#include "hash-map.h"
#include "letters.h"
#include "modular-exponentiation.h"
#include "decimal-to-binary.h"
#include "stdio.h"
#include "string.h"
#include "modular-inverse.h"

void encrypt(char *message, long long *decryptedDigits, long long e, long long n) {
    HashMap *map = createHashMap(LETTERS_SIZE);
    initializeLettersMap(map);
    size_t size = strlen(message);
    
    long long counter = 0;
    
    while (counter < size) {
        long long letterNumber = getHasMapItem(map, message[counter]);
        long long cryptNumber = modularExponentiation(letterNumber, e, n);

        decryptedDigits[counter] = cryptNumber;

        counter++;
    }
}

void decrypt(long long *cryptedMessage, char *decryptedMessage, long long e, long long n, long long m, long long size) {
    HashMap *map = createHashMap(LETTERS_SIZE);
    initializeLettersMap(map);
    long long d = modularInverse(e, m);

    long long counter = 0;

    while (counter < size) {
        long long number = cryptedMessage[counter];
        long long originalNumber = modularExponentiation(number, d, n);

        decryptedMessage[counter] = getLetter(originalNumber);

        counter++;
    }

}