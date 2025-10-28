#include "hash-map.h"
#include "letters.h"

const char LETTERS[LETTERS_SIZE] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G',
    'H', 'I', 'J', 'K', 'L', 'M', 'N',
    'O', 'P', 'Q', 'R', 'S', 'T', 'U',
    'V', 'W', 'X', 'Y', 'Z', ' '
};

void initializeLettersMap(HashMap *map) {
    for (int current = 0; current < LETTERS_SIZE; current++)
        putHashMapItem(map, LETTERS[current], current + 2);
}

char getLetter(int number) {
    return LETTERS[number - 2];
}

