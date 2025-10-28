#ifndef LETTERS_H
#define LETTERS_H
#define LETTERS_SIZE 27
#include "hash-map.h"

void initializeLettersMap(HashMap* map);
extern const char LETTERS[LETTERS_SIZE];
char getLetter(int number);

#endif