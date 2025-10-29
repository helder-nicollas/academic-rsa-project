#ifndef HASH_MAP_H
#define HASH_MAP_H
#include "stdlib.h"

typedef struct Node {
    char        key;
    long long          value;
    struct Node* next;
} Node;

typedef struct HashMap {
    Node**       buckets;
    unsigned long long size;
} HashMap;

HashMap* createHashMap(size_t size);
void     putHashMapItem(HashMap* map, char key, long long value);
long long getHasMapItem(HashMap *map, const char key);
void freeHashMap(HashMap *map);

#endif