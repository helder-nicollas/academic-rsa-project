#ifndef HASH_MAP_H
#define HASH_MAP_H
#include "stdlib.h"

typedef struct Node {
    char        key;
    int          value;
    struct Node* next;
} Node;

typedef struct HashMap {
    Node**       buckets;
    unsigned int size;
} HashMap;

HashMap* createHashMap(size_t size);
void     putHashMapItem(HashMap* map, char key, int value);
int getHasMapItem(HashMap *map, const char key);
void freeHashMap(HashMap *map);

#endif